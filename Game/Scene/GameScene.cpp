#include "../../ConsoleEx3/ConWrap.h"
#include "../../Engine/Director.h"

#include "../Component/Renderer.h"
#include "../Component/PlayerController.h"
#include "../Component/Bullet.h"

#include "GameScene.h"
#include "MainScene.h"

void GameScene::Initialize(void)
{
	Scene::Initialize();
	
	player = new GameObject();

	player->AddComponent<Renderer>();
	player->GetComponent<Renderer>().text = "■";
	player->GetComponent<Renderer>().fontColor = WHITE;
	player->AddComponent<PlayerController>();

	player->transform->x = CON_W / 4;
	player->transform->y = CON_H / 4;

	for (int i = 0; i < 100; i++)
	{
		bullet[i] = new GameObject();

		bullet[i]->AddComponent<Renderer>();
		bullet[i]->GetComponent<Renderer>().text = "**";
		bullet[i]->GetComponent<Renderer>().fontColor = YELLOW;
		bullet[i]->AddComponent<Bullet>();
		bullet[i]->IsActive = false;
	}
}

void GameScene::Update(void)
{
	Scene::Update();
	ClearScreenEx3(LIGHTRED);

	if (IsKey(VK_Z))
	{
		for (int i = 0; i < 100; i++)
		{
			if (not bullet[i]->IsActive)
			{
				bullet[i]->GetComponent<Bullet>().Spawn(player->transform->x, player->transform->y);
				break;
			}
		}
	}

	if(IsKey(VK_1))
		Director::GetInstance()->ChangeScene(new MainScene);
}

void GameScene::Exit(void)
{
	Scene::Exit();
}

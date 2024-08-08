#include "../../ConsoleEx3/ConWrap.h"
#include "../../Engine/Director.h"

#include "../Component/Renderer.h"
#include "../Component/PlayerController.h"
#include "../Component/MonsterController.h"
#include "../Component/Bullet.h"

#include "../Utility/CollisionManager.h"

#include "GameScene.h"
#include "MainScene.h"

#pragma warning(disable:4996)

void GameScene::Initialize(void)
{
	Scene::Initialize();

	player = new GameObject();

	player->AddComponent<Renderer>().text->assign("■");

	player->AddComponent<PlayerController>();

	player->transform->x = CON_W / 4;
	player->transform->y = CON_H / 4;

	for (auto& bullet : bullets)
	{
		bullet = new GameObject();

		bullet->AddComponent<Renderer>().text->assign("**");

		bullet->AddComponent<Bullet>();
		bullet->IsActive = false;
	}

	for (auto& monster : monsters)
	{
		monster = new GameObject();

		monster->AddComponent<Renderer>().text->assign("◈");
		monster->AddComponent<MonsterController>();

		monster->IsActive = false;
	}
}

void GameScene::Update(void)
{
	Scene::Update();
	ClearScreenEx3(WHITE);

	for (const auto& monster : monsters)
	{
		if (CollisionManager::PointVSPoint(player, monster))
		{
			Director::GetInstance()->ExitGame();
			return;
		}

		for (const auto& bullet : bullets)
		{
			if (CollisionManager::PointVSPoint(bullet, monster))
			{
				_gameScore += 20;

				monster->IsActive = false;
				bullet->IsActive = false;
			}
		}
	}

	if (GetTickCount64() - _tickMonsterSpawnTime > 1000)
	{
		for (const auto& monster : monsters)
		{
			if (not monster->IsActive)
			{
				auto spawnPostionX = (rand() % (CON_W / 2)) * 2;
				monster->GetComponent<MonsterController>().Spawn(spawnPostionX, 0);

				_tickMonsterSpawnTime = GetTickCount64();
				break;
			}
		}
	}

	if (GetTickCount64() - _tickBulletSpawnTime > 200)
	{
		if (IsKey(VK_Z))
		{
				for (int i = 0; i < 100; i++)
				{
					if (not bullets[i]->IsActive)
					{
						bullets[i]->GetComponent<Bullet>().Spawn(player->transform->x, player->transform->y);

						_tickBulletSpawnTime = GetTickCount64();
						break;
					}
			}
		}
	}

	if (IsKey(VK_1))
		Director::GetInstance()->ChangeScene(new MainScene);

	DrawUI();
}

void GameScene::Exit(void)
{
	Scene::Exit();
}

void GameScene::DrawUI(void)
{
	char _strBuffer[100];

	sprintf(_strBuffer, "Score : %d", _gameScore);
	DrawStrEx3(0, 0, _strBuffer, YELLOW, BLACK);
}

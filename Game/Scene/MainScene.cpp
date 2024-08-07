#include "../../ConsoleEx3/ConWrap.h"
#include "../../Engine/Director.h"

#include "MainScene.h"
#include "GameScene.h"

#include "../Component/Renderer.h"

void MainScene::Initialize(void)
{
	Scene::Initialize();
}

void MainScene::Update(void)
{
	Scene::Update();
	ClearScreenEx3(CYAN);
	
	if (IsKey(VK_2))
		Director::GetInstance()->ChangeScene(new GameScene);
}

void MainScene::Exit(void)
{
	Scene::Exit();
}

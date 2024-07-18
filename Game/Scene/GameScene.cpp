#include "../../ConsoleEx3/ConWrap.h"
#include "../../Engine/Director.h"

#include "GameScene.h"
#include "MainScene.h"

void GameScene::Initialize(void)
{
}

void GameScene::Update(void)
{
	ClearScreenEx3(LIGHTRED);

	if (IsKey(VK_1))
		Director::GetInstance()->ChangeScene(new MainScene());
}

void GameScene::Exit(void)
{
}

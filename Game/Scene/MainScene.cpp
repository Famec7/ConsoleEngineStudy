#include "../../ConsoleEx3/ConWrap.h"
#include "../../Engine/Director.h"

#include "MainScene.h"
#include "GameScene.h"

void MainScene::Initialize(void)
{

}

void MainScene::Update(void)
{
	ClearScreenEx3(CYAN);

	if (IsKey(VK_2))
		Director::GetInstance()->ChangeScene(new GameScene());
}

void MainScene::Exit(void)
{

}

#include "../../ConsoleEx3/ConWrap.h"
#include "../../Engine/Director.h"

#include "MainScene.h"
#include "GameScene.h"

void MainScene::Initialize(void)
{
	obj = new GameObject();

	obj->AddComponent<Transform>();
	obj->GetComponent<Transform>().x = 5.0f;
	obj->GetComponent<Transform>().y = 10.0f;
}

void MainScene::Update(void)
{
	ClearScreenEx3(CYAN);

	DrawStrEx3(obj->GetComponent<Transform>().x, obj->GetComponent<Transform>().y, "A", YELLOW, BLACK);

	if (IsKey(VK_2))
		Director::GetInstance()->ChangeScene(new GameScene());
}

void MainScene::Exit(void)
{

}

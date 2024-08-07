#include "PlayerController.h"
#include "../../ConsoleEx3/ConWrap.h"

void PlayerController::Init()
{

}

void PlayerController::Update()
{
	if (IsKey(VK_LEFT))		transform->x-=2;
	if (IsKey(VK_RIGHT))	transform->x+=2;
	if (IsKey(VK_UP))		transform->y--;
	if (IsKey(VK_DOWN))		transform->y++;

	Clipping();
}

void PlayerController::Render()
{

}

void PlayerController::Exit()
{

}

void PlayerController::Clipping()
{
	if (transform->x < 0)		transform->x = 0;
	if (transform->x > CON_W-2)	transform->x = CON_W - 2;
	if (transform->y < 0)		transform->y = 0;
	if (transform->y > CON_H-1)	transform->y = CON_H -1;
}

#include "../../ConsoleEx3/ConWrap.h"
#include "../../Engine/GameObject.h"

#include "MonsterController.h"

void MonsterController::Initialize(void)
{
}

void MonsterController::Update(void)
{
	if (GetTickCount64() - _tickMoveTime > 100)
	{
		_tickMoveTime = GetTickCount64();
		transform->y++;
	}

	Clipping();
}

void MonsterController::Render(void)
{
}

void MonsterController::Exit(void)
{
}

void MonsterController::Clipping(void)
{
	if (transform->y > CON_H)
		gameObject->IsActive = false;
}

void MonsterController::Spawn(int x, int y)
{
	gameObject->IsActive = true;
	transform->x = x;
	transform->y = y;
}

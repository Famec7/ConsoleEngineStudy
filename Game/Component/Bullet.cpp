#include "Bullet.h"
#include "../../ConsoleEx3/ConWrap.h"
#include "../../Engine/GameObject.h"

void Bullet::Init()
{

}

void Bullet::Update()
{
	transform->y--; // 총알은 매 프레임 위로 올라가야 함
	Clipping(); // 총알이 죽었는지 안 죽었는지 판단
}

void Bullet::Render()
{

}

void Bullet::Exit()
{

}

void Bullet::Clipping()
{
	// 화면 밖을 나가면 다시 사용 가능한 죽은 총알로 변경
	if (transform->y < 0) gameObject->IsActive = false;
}

void Bullet::Spawn(int x, int y)
{
	// 사용 중인 총알로 변경
	gameObject->IsActive = true;
	transform->x = x;
	transform->y = y;
}

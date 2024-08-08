#include "CollisionManager.h"

#include "../../Engine/GameObject.h"

bool CollisionManager::PointVSPoint(GameObject* obj1, GameObject* obj2)
{
	if (not obj1->IsActive)
		return false;
	if(not obj2->IsActive)
		return false;

	return (obj1->transform->x == obj2->transform->x) and (obj1->transform->y == obj2->transform->y);
}
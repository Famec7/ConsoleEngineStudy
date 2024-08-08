#pragma once

class GameObject;
class CollisionManager
{
public:
	static bool PointVSPoint(GameObject *obj1, GameObject *obj2);

public:
	CollisionManager() = default;
	~CollisionManager() = default;
};
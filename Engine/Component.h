#pragma once

#include "../Game/Component/Transform.h"

class GameObject;
class Component
{
public:
	GameObject* gameObject;
	Transform* transform;

public:
	virtual void Initialize(void);
	virtual void Update(void);
	virtual void Render(void);
	virtual void Exit(void);

public:
	Component() = default;
	virtual ~Component() = default;
};
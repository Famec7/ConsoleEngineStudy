#pragma once

#include "GameObject.h"
#include <list>

class Scene
{
public:
	std::list<GameObject*> hierarchy;

public:
	virtual void Initialize(void);
	virtual void Update(void);
	virtual void Render(void);
	virtual void Exit(void);

public:
	Scene() = default;
	virtual ~Scene() = default;
};
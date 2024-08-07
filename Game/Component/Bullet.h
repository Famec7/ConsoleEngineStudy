#pragma once

#include "../../Engine/Component.h"

class Bullet : public Component
{
public:
	virtual void Init();
	virtual void Update();
	virtual void Render();
	virtual void Exit();

	void Clipping();
	void Spawn(int x, int y);
};


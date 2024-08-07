#pragma once

#include "../../Engine/Component.h"

class PlayerController : public Component
{
public:
	virtual void Init();
	virtual void Update();
	virtual void Render();
	virtual void Exit();

	void Clipping();
};


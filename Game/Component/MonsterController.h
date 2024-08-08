#pragma once

#include "../../Engine/Component.h"

class MonsterController : public Component
{
public:
	virtual void Initialize(void);
	virtual void Update(void);
	virtual void Render(void);
	virtual void Exit(void);

	void Clipping(void);
	void Spawn(int x, int y);

private:
	LONG _tickMoveTime;
};

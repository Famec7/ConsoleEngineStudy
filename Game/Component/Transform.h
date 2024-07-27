#pragma once

#include "../../Engine/Component.h"

class Transform : public Component
{
public:
	float x = 0.0f;
	float y = 0.0f;
	
	void Initialize(void) override;
	void Update(void) override;
	void Render(void) override;
};
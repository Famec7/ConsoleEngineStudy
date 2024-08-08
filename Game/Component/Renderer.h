#pragma once

#include "../../Engine/Component.h"
#include <string>

class Renderer : public Component
{
public:
	std::string* text;

	DWORD fontColor;
	DWORD backColor;

	virtual void Initialize();
	virtual void Update();
	virtual void Render();
	virtual void Exit();
};


#pragma once

#include "../../Engine/Scene.h"

class MainScene : public Scene
{
public:
	void Initialize(void) override;
	void Update(void) override;
	void Exit(void) override;
};
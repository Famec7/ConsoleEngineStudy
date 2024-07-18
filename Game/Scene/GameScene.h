#pragma once

#include "../../Engine/Scene.h"

class GameScene : public Scene
{
	void Initialize(void) override;
	void Update(void) override;
	void Exit(void) override;
};
#pragma once

#include "../../Engine/Scene.h"

#include "../../Engine/GameObject.h"
#include "../Component/Transform.h"

class MainScene : public Scene
{
public:
	GameObject* obj = nullptr;

public:
	void Initialize(void) override;
	void Update(void) override;
	void Exit(void) override;
};
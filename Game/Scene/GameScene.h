#pragma once

#include "../../Engine/Scene.h"
#include "../../Engine/GameObject.h"

class GameScene : public Scene
{
public:
	GameObject* player;

	GameObject* bullet[100];

public:
	void Initialize(void) override;
	void Update(void) override;
	void Exit(void) override;
};
#pragma once

#include "../../Engine/Scene.h"
#include "../../Engine/GameObject.h"

class GameScene : public Scene
{
public:
	GameObject* player;

	GameObject* bullets[100];
	GameObject* monsters[20];

public:
	void Initialize(void) override;
	void Update(void) override;
	void Exit(void) override;

	void DrawUI(void);

private:
	LONG _tickMonsterSpawnTime; // 몬스터 생성 시간 간격
	LONG _tickBulletSpawnTime; // 총알 생성 시간 간격

	int _gameScore;
};
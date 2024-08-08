#pragma once

#include "../Engine/Singleton.h"
#include "../Engine/Scene.h"

class Director : public Singleton<Director>
{
private:
	Scene* _currentScene = nullptr;
	bool _gameloop = true;

public:
	void ChangeScene(Scene * newScene);
	void ExitGame(void) {_gameloop = false;}

	bool IsGameloop(void) const { return _gameloop; }
	Scene* GetCurrentScene(void) const { return _currentScene; }

public:
	void Initialize(void);
	void Update(void);
	void Render(void);
	void Exit(void);
};
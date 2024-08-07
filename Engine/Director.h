#pragma once

#include "../Engine/Singleton.h"
#include "../Engine/Scene.h"

class Director : public Singleton<Director>
{
private:
	Scene* _currentScene = nullptr;

public:
	void ChangeScene(Scene* newScene);
	Scene* GetCurrentScene(void) const { return _currentScene; }

public:
	void Initialize(void);
	void Update(void);
	void Render(void);
	void Exit(void);
};
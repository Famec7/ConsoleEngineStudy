#include "Director.h"

void Director::ChangeScene(Scene* newScene)
{
	if (_currentScene != nullptr)
	{
		_currentScene->Exit();
		delete _currentScene;
	}

	_currentScene = newScene;
	_currentScene->Initialize();
}

void Director::Initialize(void)
{

}

void Director::Update(void)
{
	if (_currentScene != nullptr)
	{
		_currentScene->Update();
	}
}

void Director::Render(void)
{

}

void Director::Exit(void)
{

}

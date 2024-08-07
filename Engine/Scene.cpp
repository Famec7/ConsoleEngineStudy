#include "Scene.h"

void Scene::Initialize(void)
{

}

void Scene::Update(void)
{
	for (const auto& obj : hierarchy)
	{
		obj->Update();
	}
}

void Scene::Render(void)
{
	for (const auto& obj : hierarchy)
	{
		obj->Render();
	}
}

void Scene::Exit(void)
{
	for (const auto& obj : hierarchy)
	{
		obj->Exit();
		delete obj;
	}

	hierarchy.clear();
}

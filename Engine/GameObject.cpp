#include "GameObject.h"
#include "Director.h"

GameObject::GameObject()
{
	IsActive = true;
	transform = new Transform();
	Director::GetInstance()->GetCurrentScene()->hierarchy.push_back(this);
}

void GameObject::Initialize()
{

}

void GameObject::Update()
{
	if (not IsActive)
		return;

	for (const auto& component : components)
	{
		component->Update();
	}
}

void GameObject::Render()
{
	if (not IsActive)
		return;

	for (const auto& component : components)
	{
		component->Render();
	}
}

void GameObject::Exit()
{
	for (const auto& component : components)
	{
		component->Exit();
		delete component;
	}

	components.clear();
	delete transform;
}


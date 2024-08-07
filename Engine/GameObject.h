#pragma once

#include "Component.h"
#include "../Game/Component/Transform.h"

#include <iostream>
#include <list>

class GameObject
{
public:
	Transform* transform;
	bool IsActive;

public:
	virtual void Initialize();
	virtual void Update();
	virtual void Render();
	virtual void Exit();

public:
	std::list<Component*> components;

	template <class T>
	T& AddComponent();

	template<class T>
	T& GetComponent();

public:
	GameObject();
	virtual ~GameObject() = default;
};

template<class T>
inline T& GameObject::AddComponent()
{
	T* newComponent = new T();
	Component* pComponent = static_cast<Component*>(newComponent);

	pComponent->Initialize();
	pComponent->transform = transform;
	pComponent->gameObject = this;

	components.push_back(pComponent);
	return *newComponent;
}

template<class T>
inline T& GameObject::GetComponent()
{
	for (const auto& component : components)
	{
		if (dynamic_cast<T*>(component) != nullptr)
		{
			return *static_cast<T*>(component);
		}
	}

	throw std::exception("Component not found");
}

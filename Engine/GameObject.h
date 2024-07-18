#pragma once

class GameObject
{
public:
	void Initialize();
	void Update();

public:
	GameObject() = default;
	virtual ~GameObject() = default;
};
#pragma once

class Scene
{
public:
	virtual void Initialize(void) = 0;
	virtual void Update(void) = 0;
	virtual void Exit(void) = 0;

public:
	Scene() = default;
	virtual ~Scene() = default;
};
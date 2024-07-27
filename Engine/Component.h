#pragma once

class Component
{
public:
	virtual void Initialize(void);
	virtual void Update(void);
	virtual void Render(void);

public:
	Component() = default;
	virtual ~Component() = default;
};
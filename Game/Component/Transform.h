#pragma once

class Transform
{
public:
	float x = 0.0f;
	float y = 0.0f;

	Transform() : x(0.0f), y(0.0f) {}
	~Transform() = default;
};
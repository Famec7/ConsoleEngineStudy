#include "../../ConsoleEx3/ConWrap.h"
#include "Renderer.h"

void Renderer::Init()
{
	text = "";

	fontColor = WHITE;
	backColor = BLACK;
}

void Renderer::Update()
{
}

void Renderer::Render()
{
	DrawStrEx3(transform->x, transform->y, text.c_str(), fontColor, backColor);
}

void Renderer::Exit()
{
	text.clear();
	text.empty();
}

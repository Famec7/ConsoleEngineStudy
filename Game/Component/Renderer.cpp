#include "../../ConsoleEx3/ConWrap.h"
#include "Renderer.h"

void Renderer::Initialize()
{
	text = new std::string();

	fontColor = WHITE;
	backColor = BLACK;
}

void Renderer::Update()
{
}

void Renderer::Render()
{
	DrawStrEx3(transform->x, transform->y, text->c_str(), fontColor, backColor);
}

void Renderer::Exit()
{
	delete text;
	text = nullptr;
}

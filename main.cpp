﻿#include <iostream>

#include "ConsoleEx3/ConWrap.h"

#include "Engine/Director.h"
#include "Game/Scene/MainScene.h"
#include "Game/Scene/GameScene.h"

int main()
{
	InitialConsole();
	system("chcp 949");
	SetWindowTitle("C++ 콘솔 엔진");
	srand((unsigned int)time(NULL));

	Director* director = Director::GetInstance();

	director->Initialize();
	director->ChangeScene(new GameScene);

	while (director->IsGameloop())
	{
		CheckInput();
		ClearScreenEx3(WHITE);

		director->Update();
		director->Render();

		Flip();
		EngineSync(32);
	}

	director->Exit();

	ReleaseConsole();

	return EXIT_SUCCESS;
}
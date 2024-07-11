#include <iostream>

#include "ConsoleEx3/ConWrap.h"

int main()
{
	InitialConsole();
	system("chcp 949");
	SetWindowTitle("C++ 콘솔 엔진");
	srand((unsigned int)time(NULL));

	while (true)
	{
		CheckInput();
		ClearScreenEx3(BLACK);

		static int x = 0;
		static int y = 0;

		if (IsKey(VK_LEFT)) x -= 2;
		if (IsKey(VK_RIGHT)) x += 2;
		if (IsKey(VK_UP)) y--;
		if (IsKey(VK_DOWN)) y++;

		DrawStrEx3(x, y, "H", YELLOW, RED);

		Flip();
		EngineSync(32);
	}

	ReleaseConsole();

	return EXIT_SUCCESS;
}
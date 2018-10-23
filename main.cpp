#include "Game.h"
#include <SDL.h>

int main(int argc, char* argv[])
{
	Game* g_game = new Game();
	g_game->init("Chapter 10", 100, 100, 640, 480, false);

	while (g_game->running())
	{
		g_game->handleEvents();
		g_game->update();
		g_game->render();
		SDL_Delay(10); // add the delay
	}
	g_game->clean();
	return 0;
}
#pragma once
#include<vector>
#include "SDL.h"
#include"GameObject.h"

#include"Monster.h"

class Game
{
public:
	Game() {}
	~Game() {}
	bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void render();

	void handleEvents();
	void clean();
	void update();
	bool running() { return m_bRunning; }

private:
	SDL_Window * m_pWindow;
	SDL_Renderer* m_pRenderer;
	bool m_bRunning;
	int m_CurrentFrame;
	//GameObject m_go;
	//Player m_player;

	std::vector<GameObject*> m_gameObjects;


	GameObject* m_monster1;
	GameObject* m_monster2;

};

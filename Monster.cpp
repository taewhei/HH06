#include "Monster.h"

void Monster::load(int x, int y, int width, int height, std::string textureID)
{
	GameObject::load(x, y, width, height, textureID);
}

void Monster::draw(SDL_Renderer * pRenderer)
{
	GameObject::draw(pRenderer);
}

void Monster::update()
{
	move();
	m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
}

void Monster::clean()
{
}
void Monster::move()
{
	if ((m_x >300)||(m_x < 100))
	{
		speed *= -1;
	}
	m_x += speed;
}

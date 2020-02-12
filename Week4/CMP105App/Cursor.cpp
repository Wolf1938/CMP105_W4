#include "Cursor.h"

Cursor::Cursor()
{
	texture.loadFromFile("gfx/icon.png");

	sprite.setTexture(&texture);
	sprite.setSize(sf::Vector2f(20, 20));
	SetPosition(0,0);
}

void Cursor::SetPosition(int _x, int _y)
{	
	sprite.setPosition(_x, _y);
}
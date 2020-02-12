#include "Background.h"

Background::Background()
{
	texture.loadFromFile("gfx/level1_1.png");

	sprite.setTexture(&texture);
	sprite.setSize(sf::Vector2f(11038, 675));
}

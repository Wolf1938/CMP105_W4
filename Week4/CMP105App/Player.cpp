#include "Player.h"

Player::Player()
{
	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	sprite.setTexture(&texture);
	sprite.setSize(sf::Vector2f(100, 100));
	sprite.setPosition(100, 100);
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		sprite.move(0, -1000 * dt);
	}
	else if (input->isKeyDown(sf::Keyboard::Down))
	{
		sprite.move(0, 1000 * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		sprite.move(1000 * dt, 0);
	}
	else if (input->isKeyDown(sf::Keyboard::Left))
	{
		sprite.move(-1000 * dt, 0);
	}
}

Player::~Player()
{

}

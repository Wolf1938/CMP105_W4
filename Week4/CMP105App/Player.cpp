#include "Player.h"

Player::Player()
{
	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		testSprite.move(0, -1000 * dt);
	}
	else if (input->isKeyDown(sf::Keyboard::Down))
	{
		testSprite.move(0, 1000 * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		testSprite.move(1000 * dt, 0);
	}
	else if (input->isKeyDown(sf::Keyboard::Left))
	{
		testSprite.move(-1000 * dt, 0);
	}
}

Player::~Player()
{

}

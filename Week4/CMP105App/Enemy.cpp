#include "Enemy.h"
#include "Framework/GameObject.h"

Enemy::Enemy()
{

	directionX = 1;
	directionY = 1;
}

void Enemy::setWindow(sf::RenderWindow* hwnd)
{
	window = hwnd;
}

void Enemy::Update(float dt)
{
	directionX = sprite.getPosition().x <= 0 ? 1 : sprite.getPosition().x >= window->getSize().x - sprite.getSize().x ? -1 : directionX;
	directionY = sprite.getPosition().y <= 0 ? 1 : sprite.getPosition().y >= window->getSize().y - sprite.getSize().y ? -1 : directionY;
	sprite.move(500 * dt * directionX, 250 * dt * directionY);
}

Enemy::~Enemy()
{

}



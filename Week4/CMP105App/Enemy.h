#pragma once
#include "Framework/GameObject.h"

class Enemy :
	public GameObject
{
public:
	Enemy();
	~Enemy();

	void setWindow(sf::RenderWindow* hwnd);
	void Update(float dt);
	
	sf::RenderWindow* window;
	GameObject sprite;
	sf::Texture texture;

	int directionX;
	int directionY;
};


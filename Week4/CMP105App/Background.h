#pragma once
#include "Framework/GameObject.h"

class Background :
	public GameObject
{
public:

	Background();
	GameObject sprite;
	sf::Texture texture;
};


#pragma once
#include "Framework/GameObject.h"

class Cursor :
	public GameObject
{
public:
	Cursor();
	void SetPosition(int _x, int _y);
	GameObject sprite;
	sf::Texture texture;	
};


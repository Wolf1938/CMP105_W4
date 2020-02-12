#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	
	window->setMouseCursorVisible(false);
	player.setInput(input);	

	enemy[0].setWindow(window);
	enemy[0].texture.loadFromFile("gfx/goomba.png");

	enemy[0].sprite.setTexture(&enemy[0].texture);
	enemy[0].sprite.setSize(sf::Vector2f(100, 100));
	enemy[0].sprite.setPosition(100, 400);
	
	enemy[1].setWindow(window);
	enemy[1].texture.loadFromFile("gfx/goomba.png");

	enemy[1].sprite.setTexture(&enemy[1].texture);
	enemy[1].sprite.setSize(sf::Vector2f(100, 100));
	enemy[1].sprite.setPosition(300, 300);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

}

// Update game objects
void Level::update(float dt)
{
	player.handleInput(dt);
	enemy[0].Update(dt);
	enemy[1].Update(dt);
	cursor.SetPosition(input->getMouseX(), input->getMouseY());
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(player.sprite);
	window->draw(enemy[0].sprite);
	window->draw(enemy[1].sprite);
	window->draw(cursor.sprite);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}
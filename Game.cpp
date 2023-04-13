#include "Game.hpp"

Game::Game(sf::RenderWindow* l_window){
	pWindow = l_window;
	init();
}

void Game::init(){
	
}

void Game::input(){
		sf::Event event;
		while (pWindow->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				pWindow->close();
		}
}

void Game::update(){
	zombie1.move();
}

void Game::render(){
    pWindow->clear();
    pWindow->draw(*(zombie1.getSprite()));
    pWindow->display();
}


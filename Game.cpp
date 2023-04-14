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
	//StateGame.update(MyTime* l_pmyTime)
	//StateMenu.update()
	//StateWatever.update()
	if(myTime.getTick()){
		zombie1.move();
	}	
	//zombie1.move();
}

void Game::render(){
    pWindow->clear();
    pWindow->draw(*(zombie1.getSprite()));
    pWindow->display();
}


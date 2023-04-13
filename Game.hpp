#ifndef GAME_HPP
#define GAME_HPP

#include "SFML/Graphics.hpp"
#include "TextureResourceManager.hpp"
#include "ZombieEnemy.hpp"
#include "State.hpp"

class Game{
public:
	Game (sf::RenderWindow* l_window);
    void init();
    void input();
    void update();
    void render();

    void setState();

protected:
	sf::RenderWindow* pWindow;
    State* state;    
	
    ZombieEnemy zombie1;
	

};

#endif

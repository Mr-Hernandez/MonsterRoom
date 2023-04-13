#ifndef MAIN_HPP
#define MAIN_HPP

#include <SFML/Graphics.hpp>
#include "Game.hpp"

int main()
{

    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
    //sf::CircleShape shape(100.f);
    //shape.setFillColor(sf::Color::Green);
  
    Game game(&window);
    game.init();
    //ZombieEnemy Zombie1;
    while (window.isOpen())
    {
	game.input();
	game.update();
	game.render();
        /*
        window.clear();
        window.draw(shape);
        window.draw(*(Zombie1.getSprite()));
        window.display();
	*/
    }

    return 0;
}

#endif
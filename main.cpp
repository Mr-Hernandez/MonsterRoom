#include <SFML/Graphics.hpp>
#include "Enemies.hpp"
#include "TextureResourceManager.hpp"
#include "ZombieEnemy.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    ZombieEnemy Zombie1;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
	Zombie1.move();
        window.clear();
        window.draw(shape);
	window.draw(*(Zombie1.getSprite()));
        window.display();
    }

    return 0;
}

#ifndef ENEMIES_HPP
#define ENEMIES_HPP

#include <SFML/Graphics.hpp>
#include "MoveBehavior.hpp"

class Enemies{
public:
	virtual void Foo() = 0;
	
	Enemies();
	sf::Sprite* getSprite();
	void updateSpritePos(sf::Vector2f newPos);
	virtual ~Enemies(){}

protected:
	std::string textureID;
	sf::Vector2f pos;
	//std::shared_ptr<sf::Texture> texture;
	//sf::Texture* texture;
	sf::Texture tmpTexture;
	sf::Sprite sprite;
	sf::IntRect textureRect;


	// Behaviors Here
	MoveBehavior* moveBehavior;	


};

#endif

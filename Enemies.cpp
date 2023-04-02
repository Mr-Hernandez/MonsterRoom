#include "Enemies.hpp"

Enemies::Enemies(){
	// behavior initialization
	// position initialization if you want here
	//
	// Initialize default values for an enemy
	textureID = "default";
	pos = sf::Vector2f(0.0, 0.0);
	tmpTexture.loadFromFile("Resources/Textures/default_texture.png");
	sprite.setTexture(tmpTexture);
	// get pointer to Texture (this means this texture needs to be added a list that loads textures already or something)
}

sf::Sprite* Enemies::getSprite(){
	return &sprite;
}

void Enemies::updateSpritePos(sf::Vector2f newPos){
	sprite.setPosition(newPos);
}

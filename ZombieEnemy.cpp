#include "ZombieEnemy.hpp"
#include <iostream>

void ZombieEnemy::Foo(){
	std::cout << "The Prince of Atlantis: Prince Namar" << std::endl;	
}

ZombieEnemy::ZombieEnemy(){
	textureID = "zombie";
	auto rtexture = TextureResourceManager::getInstance().getTexture(textureID);
	sf::Texture& atexture= *rtexture;
	sprite.setTexture(atexture);
	
}

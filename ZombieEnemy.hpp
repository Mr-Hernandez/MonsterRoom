#ifndef ZOMBIEENEMY_HPP
#define ZOMBIEENEMY_HPP

#include "Enemies.hpp"
#include "TextureResourceManager.hpp"
#include "MoveLikePoolBall.hpp"

class ZombieEnemy : public Enemies {
public:
	void Foo();
	ZombieEnemy();
	void move();

	~ZombieEnemy();	
};


#endif

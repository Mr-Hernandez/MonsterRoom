#ifndef MOVEBEHAVIOR_HPP
#define MOVEBEHAVIOR_HPP

#include <SFML/Graphics.hpp>

class MoveBehavior {
public:
	virtual sf::Vector2f move(sf::Vector2f l_pos) = 0;
	
	virtual ~MoveBehavior() {}
};

#endif

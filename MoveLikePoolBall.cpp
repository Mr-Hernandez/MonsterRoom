# include "MoveLikePoolBall.hpp"

sf::Vector2f MoveLikePoolBall::move(sf::Vector2f l_pos){
	l_pos.x += 1;
	l_pos.y += 1;
	return sf::Vector2f(l_pos.x, l_pos.y);
}

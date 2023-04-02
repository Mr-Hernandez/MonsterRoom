# include "MoveLikePoolBall.hpp"

sf::Vector2f MoveLikePoolBall::move(sf::Vector2f l_pos){
	l_pos.x += 0.1;
	l_pos.y += 0.1;
	return sf::Vector2f(l_pos.x, l_pos.y);
}

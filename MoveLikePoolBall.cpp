# include "MoveLikePoolBall.hpp"

sf::Vector2f MoveLikePoolBall::move(sf::Vector2f l_pos){
	l_pos.x += 1.0;
	l_pos.y += 1.0;
	return l_pos;
}

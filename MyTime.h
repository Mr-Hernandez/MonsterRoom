#ifndef MYTIME_HPP
#define MYTIME_HPP

#include "SFML/Graphics.hpp"

class MyTime{
public:
    MyTime();
    sf::Time getElapsed();
    sf::Time getElapsedTotal();
    bool getTick();
    void update();

private:
    sf::Clock m_clock;
    sf::Time m_timeElapsed;
    sf::Time m_timeElapsedTotal;
    float m_framerate;
    float m_frametime;
    bool m_tick;
};
#endif
#include "MyTime.h"

MyTime::MyTime(){
    m_framerate = 60;
    m_frametime = 1.0 / m_framerate;
    m_clock.restart();
}

void MyTime::update(){
    m_tick = false;
    m_timeElapsed = m_clock.restart();
    m_timeElapsedTotal += m_timeElapsed;
    if(m_timeElapsedTotal.asSeconds() >= m_frametime){
        m_timeElapsedTotal.Zero;
        m_tick = true;
    }
}

bool MyTime::getTick(){
    return m_tick;
}

sf::Time MyTime::getElapsed(){
    return m_timeElapsed;
}

sf::Time MyTime::getElapsedTotal(){
    return m_timeElapsedTotal;
}

// What if i have a container that stores clocks or times so that
// functions can ask for time keeping. How can the function track their
// own clock? Maybe on asking the send a message unique to them, like their
// name. They send this when they register a clock and also when they ask for
// updates. This might work because the time class is global.  
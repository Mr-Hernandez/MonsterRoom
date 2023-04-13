#ifndef STATEGAME_HPP
#define STATEGAME_HPP

#include "State.hpp"

class StateGame : public State {
public:
    void input();
    void update();
    void render();

};

#endif

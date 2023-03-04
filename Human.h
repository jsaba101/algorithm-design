#ifndef HUMAN.H
#define HUMAN.H
#include "Player.h"
#include <iostream>

class Human: public Player {
    public:
        Human();
        Human(std::string hname);
};
#endif
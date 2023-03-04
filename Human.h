#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream>

class Human: public Player {
    public:
        Human();
        Human(std::string hname);
        virtual char makeMove();
        virtual std::string getName();
};
#endif
#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>

class Human: public Player {
    public:
        Human();
        Human(std::string hname);
        Move * makeMove();
};
#endif
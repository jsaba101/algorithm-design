#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

class Player{
    public:
        std::string move;
        std::string name;
        Move * makeMove();
        virtual std::string getName() = 0;
};
#endif
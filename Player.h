#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

class Player{
    public:
        Move* move;
        std::string name;
        virtual Move * makeMove() = 0;
        std::string getName();
};
#endif
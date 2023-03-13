#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

class Player{
    public:
        //creates pointer to a Move member, and name string
        Move* move;
        std::string name;
        //sets makeMove as pure virtual
        virtual Move * makeMove() = 0;
        //gets name of player
        std::string getName();
};
#endif
#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

class Player: public Move {
    public:
        Move * makeMove();
        virtual std::string getName() = 0;
};
#endif
#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer: public Player {
    public:
        //creates default computer constructor and inherits makeMove
        //from player
        Computer();
        Move * makeMove();
};
#endif
#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <iostream>

class Computer: public Player {
    public:
        Computer();
        virtual char makeMove();
        virtual std::string getName();
};
#endif
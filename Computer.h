#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <string>

//Computer class that inherits public from player
class Computer: public Player {
    public:
        //default computer constructor
        Computer();
        char makeMove();
        std::string getName();
};
#endif
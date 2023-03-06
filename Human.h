#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>

//Human class that inherits public from player
class Human: public Player {
    public:
        //Human constructors
        Human();
        Human(std::string hname);
        char makeMove();
        std::string getName();
};
#endif
#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>

class Human: public Player {
    public:
        //creates default human constructor, human constructor, 
        //and inherits makeMove from player
        Human();
        Human(std::string hname);
        Move * makeMove();
};
#endif
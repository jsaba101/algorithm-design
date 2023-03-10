#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot: public Move {
    public:
        Robot();
        std::string getName();
        bool Outcome(std::string name);
};
#endif
#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja: public Move {
    public:
        Ninja();
        std::string getName();
        bool Outcome(std::string name);
};
#endif
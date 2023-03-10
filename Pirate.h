#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate: public Move {
    public:
        Pirate();
        std::string getName();
        bool Outcome(std::string name);
};
#endif
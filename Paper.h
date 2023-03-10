#ifndef PAPER_H
#define PAPER_H

#include "Move.h"
#include <string>

class Paper: public Move {
    public:
        Paper();
        std::string getName();
        bool Outcome(std::string name);
};
#endif
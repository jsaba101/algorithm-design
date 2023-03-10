#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey: public Move {
    public:
        Monkey();
        std::string getName();
        bool Outcome(std::string name);
};
#endif
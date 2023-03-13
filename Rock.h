#ifndef ROCK_H
#define ROCK_H

#include "Move.h"
#include <string>

class Rock: public Move {
    public:
        //sets default constructor
        //same in every move subclass but name of constructor 
        //changed to match specific class
        Rock();
};
#endif
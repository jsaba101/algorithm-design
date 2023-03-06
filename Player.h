#ifndef PLAYER_H
#define PLAYER_H
#include <string>

//creates abstract class player
class Player {
        public:
        char move;
        std::string name;
        //pure virtual functions to make class abstract
        virtual char makeMove() = 0;
        virtual std::string getName() = 0;
};
#endif
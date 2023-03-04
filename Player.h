#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player {
        public:
        char move;
        std::string name;
        char makeMove( );
        std::string getName( );
};
#endif
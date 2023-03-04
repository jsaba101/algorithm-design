#ifndef PLAYER.H
#define PLAYER.H
#include <iostream>
#include <string>

class Player {
        public:
        char move;
        string name;
        char makeMove( );
        virtual std::string getName( ) = 0;
};
#endif
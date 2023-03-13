#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>

class Move{
    public:
        //creates name and vector with moves that a move beats
        std::string name;
        std::vector <std::string> winMoves;
        //functions to get and setname of move
        std::string getName();
        void setName(std::string moveName);
        //finds moves that a move beats in vector
        bool beats(Move* playerMove);
        //sets winning moves in vector
        void setWinMoves(std::vector<std::string> winningMoves);
};
#endif
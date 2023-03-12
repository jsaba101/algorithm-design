#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>

class Move{
    public:
        std::string name;
        std::vector <std::string> beatMoves;
        std::string getName();
        void setName(std::string moveName);
        bool beats(Move* playerMove);
        void setBeatMoves(std::vector<std::string> winningMoves);
};
#endif
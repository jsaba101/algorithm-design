#include "Move.h"

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//returns name of move
string Move::getName(){
    return name;
}

//sets name of move
void Move::setName(string moveName){
    name = moveName;
}

//sets vector with winning moves
void Move::setWinMoves(vector<string> winningMoves){
    winMoves = winningMoves;
}

//finds move in vector using algorithms
bool Move::beats(Move* playerMove){
    return find(winMoves.begin(), winMoves.end(), playerMove->name) != winMoves.end();
}
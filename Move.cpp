#include "Move.h"

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string Move::getName(){
    return name;
}

void Move::setName(string moveName){
    name = moveName;
}

void Move::setBeatMoves(vector<string> winningMoves){
    beatMoves = winningMoves;
}

bool Move::beats(Move* playerMove){
    return find(beatMoves.begin(), beatMoves.end(), playerMove->name) != beatMoves.end();
}
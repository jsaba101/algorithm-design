#include "Referee.h"
#include "Move.h"
#include <iostream>
#include <string>

using namespace std;

Referee::Referee(){};

Player * Referee::refGame(Player * player1, Player * player2){
    Move * p1 = player1->makeMove();
    Move * p2 = player2->makeMove();
    
    if (p1->getName() == p2->getName()){
        return nullptr;
    }
    else if (p1->beats(p2)){
        return player1;
    }
    else {
        return player2;
    }  
}
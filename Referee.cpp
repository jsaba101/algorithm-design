#include "Referee.h"
#include "Move.h"
#include <iostream>
#include <string>

using namespace std;

//default constructor
Referee::Referee(){};

//plays game with two players
Player * Referee::refGame(Player * player1, Player * player2){
    //asks players to make move
    Move * p1 = player1->makeMove();
    Move * p2 = player2->makeMove();
    
    //checks if game is win, loss, or draw
    if (p1->beats(p2)){
        return player1;
    }
    else if (p2->beats(p1)){
        return player2;
    }  
    else {
        return nullptr;
    }
}
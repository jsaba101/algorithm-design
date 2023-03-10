#include "Referee.h"
#include <iostream>
#include <string>

using namespace std;

Referee::Referee(){};

Player * Referee::refGame(Player * player1, Player * player2){
    Move * p1 = player1->makeMove();
    Move * p2 = player2->makeMove();
}
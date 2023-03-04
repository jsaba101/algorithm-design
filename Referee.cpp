#include "Referee.h"
#include <string>
#include <iostream>
using namespace std;

Referee::Referee(){} 

Player * Referee::refGame(Player * player1, Player * player2){
    char player1move = player1->makeMove();
    char player2move = player2->makeMove();
    if (player1move == 'R' && player2move == 'S'){
        cout << player1->name << " wins!";
    }
    else if (player1move == 'P' && player2move == 'R'){
        cout << player1->name << " wins!";
    }
    else if (player1move == 'S' && player2move == 'P'){
        cout << player1->name << " wins!";
    }
    else if (player2move == 'R' && player1move == 'S'){
        cout << player2->name << " wins!";
    }
    else if (player2move == 'P' && player1move == 'R'){
        cout << player2->name << " wins!";
    }
    else if (player2move == 'S' && player1move == 'P'){
        cout << player2->name << " wins!";
    }
    else if (player1move == player2move){
        return nullptr;
    }
    return NULL;
}
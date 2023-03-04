#include "Referee.h"
#include <string>
#include <iostream>
using namespace std;

Referee::Referee(){} 

Player * Referee::refGame(Player * player1, Player * player2){
    if (player1->move == 'R' && player2->move == 'S'){
        cout << player1->name << " wins!";
    }
    else if (player1->move == 'P' && player2->move == 'R'){
        cout << player1->name << " wins!";
    }
    else if (player1->move == 'S' && player2->move == 'P'){
        cout << player1->name << " wins!";
    }
    else if (player2->move == 'R' && player1->move == 'S'){
        cout << player2->name << " wins!";
    }
    else if (player2->move == 'P' && player1->move == 'R'){
        cout << player2->name << " wins!";
    }
    else if (player2->move == 'S' && player1->move == 'P'){
        cout << player2->name << " wins!";
    }
    else if (player1->move == player2->move){
        return nullptr;
    }
    return NULL;
}
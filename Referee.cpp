#include "Referee.h"
#include <iostream>

using namespace std;

Referee::Referee(){} 

//Plays game between two players
Player * Referee::refGame(Player * player1, Player * player2){
    //Asks for move from both players
    char player1move = player1->makeMove();
    char player2move = player2->makeMove();
    //If statements to test which player won than prints winner in terminal
    if (player1move == 'R' && player2move == 'S'){
        return player1;
    }
    else if (player1move == 'P' && player2move == 'R'){
        return player1;
    }
    else if (player1move == 'S' && player2move == 'P'){
        return player1;
    }
    else if (player2move == 'R' && player1move == 'S'){
        return player2;
    }
    else if (player2move == 'P' && player1move == 'R'){
        return player2;
    }
    else if (player2move == 'S' && player1move == 'P'){
        return player2;
    }
    //If both players played same move, prints tie in terminal and returns null pointer
    else if (player1move == player2move){
        cout << "Tie " << endl;
        return nullptr;
    }
}
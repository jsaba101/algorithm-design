#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"

//Referee class that inherits public from player
class Referee: public Player{
    public:
    //Default constructor
    Referee( );
    //Plays game between two players
    Player * refGame(Player * player1, Player * player2);
};
#endif
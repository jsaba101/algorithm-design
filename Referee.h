#ifndef REFEREE.H
#define REFEREE.H
#include "Player.h"
#include <iostream>

class Referee: public Player{
    Referee( );
    Player * refGame(Player * player1, Player * player2);
};
#endif
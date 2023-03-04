#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"
#include <iostream>

class Referee: public Player{
    Referee( );
    Player * refGame(Player * player1, Player * player2);
};
#endif
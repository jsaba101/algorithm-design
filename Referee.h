#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"
#include "Move.h"

class Referee{
    public:
        //sets referee default constructor
        Referee();
        //pointer function that referees a game
        Player * refGame(Player * player1, Player * player2);
};
#endif
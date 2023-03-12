#include "Player.h"
#include <string>

using namespace std;

Move * Player::makeMove(){
    return move;
}

string Player::getName(){
    return name;
}
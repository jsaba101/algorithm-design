#include "Computer.h"
#include <string>

using namespace std;

//sets computer name as Computer
Computer::Computer(){
    name = "Computer";
}

//sets computer move as rock
char Computer::makeMove(){
    move = 'R';
    return move;
}

//gets name
string Computer::getName(){ return name; }
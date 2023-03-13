#include "Computer.h"
#include "Rock.h"

#include <string>

using namespace std;

//default constructor that sets name as Computer
Computer::Computer(){
    this->name = "Computer";
}

//sets computer move as rock
Move * Computer::makeMove(){
  Move * move = new Rock();
  return move;
}
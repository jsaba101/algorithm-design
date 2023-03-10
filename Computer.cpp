#include "Computer.h"
#include "Rock.h"

#include <string>

using namespace std;

Computer::Computer(){
    this->name = "Computer";
}

Move * Computer::makeMove(){
  Move * move = new Rock();
  return move;
}
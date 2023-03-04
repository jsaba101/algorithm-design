#include "Computer.h"
#include <iostream>
#include <string>
using namespace std;

Computer::Computer(){
    name = "Computer";
}

char Computer::makeMove(){
    move = 'R';
    return move;
}

string Computer::getName(){ return name; }
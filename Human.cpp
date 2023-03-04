#include "Human.h"
#include <iostream>
#include <string>
using namespace std;

Human::Human(){
    this->name = "Human";
}

Human::Human(string hname){
    this->name = hname;
}

char Player::makeMove(){
    cout << "Enter Move: ";
    cin >> move;
    return move;
}

string Player::getName() { return name; }
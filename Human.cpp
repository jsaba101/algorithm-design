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

char Human::makeMove(){
    cout << "Enter Move: ";
    cin >> move;
    cout << endl;
    return move;
}

string Human::getName() { return name; }
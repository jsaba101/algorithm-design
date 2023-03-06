#include "Human.h"
#include <iostream>
#include <string>

using namespace std;

//Default constructor that sets name as Human
Human::Human(){
    this->name = "Human";
}

//Sets name of Human as input
Human::Human(string hname){
    this->name = hname;
}

//Gets move from human
char Human::makeMove(){
    cout << "Enter Move: ";
    cin >> move;
    cout << endl;
    return move;
}

//returns name of human
string Human::getName() { return name; }
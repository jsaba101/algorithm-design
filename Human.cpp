#include "Human.h"

#include <iostream>
#include <string>

using namespace std;

Human::Human(){
    this->name = "Human";
}

Human::Human(string name){
    this->name = name;
}

Move * Human::makeMove(){
  cout << "Make move ";
  cin >> move;
  Move * move = new Move();
}
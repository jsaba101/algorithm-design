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

Move * Human::makeMove(){
  cout << "Make move ";
  cin >> move;
  Move * move = new Move();
}
#include "Human.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

#include <iostream>
#include <string>

using namespace std;

Human::Human(){
    this->name = "Human";
}

Human::Human(string hname){
    this->name = hname;
}

Move * Human::makeMove(){;
  string input;;
  cout << "Make move ";
  cin >> input; //error -> "no operator ">>" matches these operands"
  if (input == "Rock"){ //error -> operand types are incompatible ("Move *" and "const char *")
    move = new Rock();
  }
  if (input == "Scissors"){
    move = new Scissors();
  }
  if (input == "Paper"){
    move = new Paper();
  }
  if (input == "Monkey"){
    move = new Monkey();
  }
  if (input == "Robot"){
    move = new Robot();
  }
  if (input == "Pirate"){
    move = new Pirate();
  }
  if (input == "Ninja"){
    move = new Ninja();
  }
  if (input == "Zombie"){
    move = new Zombie();
  }
  return move;
}
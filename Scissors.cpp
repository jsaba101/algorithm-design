#include "Scissors.h"

#include <string>

using namespace std;

Scissors::Scissors(){
    this->name = "Scissors";
}

string Scissors::getName(){;
    return name;
}

bool Scissors::Outcome(string name){
    if (name == "Paper"){
        return true;
    }
    else {
        return false;
    }
}
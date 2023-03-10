#include "Ninja.h"

#include <string>

using namespace std;

Ninja::Ninja(){
    this->name = "Ninja";
}

string Ninja::getName(){;
    return name;
}

bool Ninja::Outcome(string name){
    if (name == "Pirate" || name == "Zombie"){
        return true;
    }
    else {
        return false;
    }
}
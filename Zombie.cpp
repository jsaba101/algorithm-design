#include "Zombie.h"

#include <string>

using namespace std;

Zombie::Zombie(){
    this->name = "Zombie";
}

string Zombie::getName(){;
    return name;
}

bool Zombie::Outcome(string name){
    if (name == "Pirate" || name == "Monkey"){
        return true;
    }
    else {
        return false;
    }
}
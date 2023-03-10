#include "Pirate.h"

#include <string>

using namespace std;

Pirate::Pirate(){
    this->name = "Pirate";
}

string Pirate::getName(){;
    return name;
}

bool Pirate::Outcome(string name){
    if (name == "Robot" || name == "Monkey"){
        return true;
    }
    else {
        return false;
    }
}
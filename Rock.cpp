#include "Rock.h"

#include <string>

using namespace std;

Rock::Rock(){
    this->name = "Rock";
}

string Rock::getName(){;
    return name;
}

bool Rock::Outcome(string name){
    if (name == "Scissors"){
        return true;
    }
    else {
        return false;
    }
}
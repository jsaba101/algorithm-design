#include "Paper.h"

#include <string>

using namespace std;

Paper::Paper(){
    this->name = "Paper";
}

string Paper::getName(){;
    return name;
}

bool Paper::Outcome(string name){
    if (name == "Rock"){
        return true;
    }
    else {
        return false;
    }
}
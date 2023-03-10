#include "Monkey.h"

#include <string>

using namespace std;

Monkey::Monkey(){
    this->name = "Monkey";
}

string Monkey::getName(){;
    return name;
}

bool Monkey::Outcome(string name){
    if (name == "Ninja" || name == "Robot"){
        return true;
    }
    else {
        return false;
    }
}
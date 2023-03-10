#include "Robot.h"

#include <string>

using namespace std;

Robot::Robot(){
    this->name = "Robot";
}

string Robot::getName(){;
    return name;
}

bool Robot::Outcome(string name){
    if (name == "Ninja" || name == "Zombie"){
        return true;
    }
    else {
        return false;
    }
}
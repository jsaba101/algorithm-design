#include "Rock.h"

#include <string>

using namespace std;

//default constructor sets name of move and sets moves it can beat
//same in every move subclass but inputs changed to match 
//name and moves it can beat of specific class
Rock::Rock(){
    setName("Rock");
    setWinMoves({"Scissors"});
}
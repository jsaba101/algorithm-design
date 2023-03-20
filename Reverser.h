#ifndef REVERSER_H
#define REVERSER_H

#include <string>

//creates class called Reverser
class Reverser{
    public:
        //function that reverses number
        int reverseDigit(int n);
        //function that reverses string
        std::string reverseString(std::string input);
};
#endif

#include "Reverser.h"
#include <string>
#include <math.h>

using namespace std;

int Reverser::reverseDigit(int n){
    int integer = log10(n);
    //checks if number is less than 0 and returns -1 if true
    if (n < 0){
        return -1;
    }
    //checks if n is less than 10 and returns input if true
    else if (n < 10){
        return n;
    }
    //otherwise reverses digit by dividing input by 10 and adding the remainder of the input divided by 10
    //times the power of 10 to the integer value
    return (reverseDigit(n / 10) + (n % 10 * pow(10, integer)));
}

string Reverser::reverseString(string input){
    //checks if string is less than 2 in length and returns input if true
    if (input.size() < 2){
        return input;
    }
    //otherwise reverses string by erasing start of string and adding start to end of string
    return reverseString(input.erase(0,1)) + input[0];
}

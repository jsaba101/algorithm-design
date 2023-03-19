#include "Reverser.h"
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int Reverser::reverseDigit(int n){
    int integer = log10(n);
    //checks if number is less than 1 and returns 0;
    if (n == 0){
        return 0;
    }
    //otherwise recursively calls function
    return ((n % 10 * pow(10, integer)) + reverseDigit(n / 10));
}

string Reverser::reverseString(string input){
    //checks if string is less than 2 in length and returns it
    if (input.size() < 2){
        return input;
    }
    //otherwise reverses string by eraseing start of string and adding start to end of string
    return reverseString(input.erase(0,1)) + input[0];
}
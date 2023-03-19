#include "Reverser.h"
#include <string>
#include <iostream>

using namespace std;

int Reverser::reverseDigit(int n){
    //creates base and reverse variables
    int base;
    int reverse;
    //checks if number is greater than 9 and reverses number
    if (n > 9){
        base = n % 10;
        reverse = reverse * 10 + base;
        reverseDigit(n/10);
    }
    else {
        return n;
    }
    //otherwise returns number
    return n;
}

string Reverser::reverseString(string input){
    //checks if string is less than 2 in length and returns it
    if (input.size() < 2){
        return input;
    }
    //otherwise reverses string by eraseing start of string and adding start to end of string
    return reverseString(input.erase(0,1)) + input[0];
}
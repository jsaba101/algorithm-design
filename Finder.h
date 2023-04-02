#ifndef FINDER_H
#define FINDER_H
#include <iostream>
#include <string>
#include <vector>
#include <chrono>

//creates class called finder
class Finder {
    
    public:
        //function to find substrings in a string
        std::vector<int> findSubstrings(std::string s1, std::string s2);
};

#endif
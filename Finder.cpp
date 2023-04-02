#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {
        //creates int vector called result and sets index variable to 0
        vector<int> result;

        int index = 0;
        //uses for loop to iterate from i = 1 to size of s2 string
        for(size_t i = 1; i <= s2.size(); i++) {   
            //sets variable called found which finds substrings of s2 in s1
            size_t found = s1.find(s2.substr(0, i), index);
            //if substring found, adds index value to end of vector and sets index variable as found value
            if (found != string::npos) {
                result.push_back(found);
                index = found;
            } else {
                //else if none found, sets end of vector as -1 and breaks out of loop
                result.push_back(-1);
                break;
            }
        }
        //for loop which fills rest of vector from 1 to s2 size - vector size with -1 only if break
        //in loop above is used
        for (size_t j = 1; j <= s2.size() - result.size(); j++){
            result.push_back(-1);
        }
        //returns result vector
        return result;
    }

   
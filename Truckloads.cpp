#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    //checks if the number of crates is less than the load size and returns 1 if true;
    if (numCrates <= loadSize){
        return 1;
    }
    //recursively returns numTrucks by calling function on numCrates divided by 2 + remainder of numCrates divided by 2
    //with loadSize staying the same, and adding another call of numTrucks with numCrates divided by 2
    return numTrucks(numCrates / 2 + numCrates % 2, loadSize) + numTrucks(numCrates / 2, loadSize);
}

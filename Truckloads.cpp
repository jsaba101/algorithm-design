#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    //checks if the number of crates is less than the load size and returns 1;
    if (numCrates <= loadSize){
        return 1;
    }
    //recursively returns numtrucks
    return numTrucks(numCrates / 2 + numCrates % 2, loadSize) + numTrucks(numCrates / 2, loadSize);
}
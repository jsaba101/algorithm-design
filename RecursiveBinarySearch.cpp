#include "RecursiveBinarySearch.h"

using namespace std;

bool RecursiveBinarySearch::search(vector<int> list, int number){
    int start = list[0];
    int end = list.size() - 1;
    value = searcher(list, number, start, end);
    return value;
}

bool RecursiveBinarySearch::searcher(vector<int> list, int number, int start, int end){
    int middle = (start + end)/2;

    if (list[middle] == number){
        return true;
    }

    if (list[middle] > number){
        return searcher(list, number, start, middle - 1);
    } else {
        return searcher(list, number, end, middle + 1);
    }
}
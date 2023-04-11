#include "RecursiveBinarySearch.h"

using namespace std;

bool RecursiveBinarySearch::search(vector<int> list, int number){
    int start = list.at(0);
    int end = list.size() - 1;
    bool value = searcher(list, number, start, end);
    return value;
}

bool RecursiveBinarySearch::searcher(vector<int> list, int number, int start, int end){
    int middle = (start + end)/2;

    if (start > end){
        return false;
    }

    if (list.at(middle) > number){
        return searcher(list, number, start, middle - 1);
    } else if (list.at(middle) < number) {
        return searcher(list, number, middle + 1, end);
    } else {
        return true;
    }
}
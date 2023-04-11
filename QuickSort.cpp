#include "QuickSort.h"

using namespace std;

vector<int> QuickSort::sort(vector<int> list){
    int start = list[0];
    int end = list.size() - 1;
    sorted = sorter(list, start, end);
    return sorted;
}

vector<int> QuickSort::sorter(vector<int> list, int start, int end){
    if (start >= end){
        return list;
    }

    int pivot;
    if (list.size() > 3){
        pivot = list.at(start + 2);
    } else {
        pivot = list.at(end);
    }

    int pivot_index = start;
    for (int i = start; i < end; i++){
        if (list.at(i) < pivot){
            swap(list.at(i), list.at(pivot_index));
            pivot_index++;
        }
    }
    swap(pivot_index, pivot);

    return sorter(list, start, pivot_index - 1);
    return sorter(list, pivot_index + 1, end);
}
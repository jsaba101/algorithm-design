#include "BubbleSort.h"

using namespace std;

vector<int> BubbleSort::sort(vector<int> list){
    for (int i = list.size()-1; i > 1; i--){
        for (int j = 0; j < i; j++){
            if (list.at(j) > list.at(j+1)){
                swap(list[j], list[j+1]);
            }
        }
    }
    return list;
}
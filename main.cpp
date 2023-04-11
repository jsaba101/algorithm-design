#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    QuickSort q1;
    RecursiveBinarySearch r1;
    vector<int> list;
    int value;
    string line;

    cout << "Enter values separated by a space: ";
    getline(cin, line);
    istringstream ss(line);
    while (ss >> value){
        list.push_back(value);
    }

    vector<int> sorted = q1.sort(list);
    bool belongs = r1.search(sorted, 1);
    cout << belongs << " ";
    for (int i = 0; i < sorted.size(); i++){
        cout << sorted[i] << " ";
    }
    cout << endl;
}
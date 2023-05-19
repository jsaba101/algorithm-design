#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int kth_largest(vector<int> values, int k){
    //creates priority queue container called heap
    priority_queue<int> heap;
    
    //for loop from 0 to size of vector, which pushes value of vector at i to back of priority queue
    for (int i = 0; i < values.size(); i++){
        heap.push(values.at(i));
    }

    //for loop from 0 to k integer - 1 which removes top element of priority queue in each iteration
    for (int i = 0; i < k - 1; i++){
        heap.pop();
    }

    //gets kth largest value from top of priority queue and stores in int value
    int kthLargest = heap.top();

    //returns kth largest element
    return kthLargest;
}
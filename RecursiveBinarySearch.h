#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch {
    private:
        bool searcher(std::vector<int>, int, int, int);
    public:
        bool search(std::vector<int>, int);
};
#endif
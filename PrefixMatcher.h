#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>
#include <map>
#include "Trie.h"

class PrefixMatcher: private Trie{
    private:
        std::map<int, std::string> routers;
    public:
        int selectRouter(std::string networkAddress);
        void insert(std::string address, int routerNumber);
};
#endif
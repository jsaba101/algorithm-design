#ifndef TRIE_H
#define TRIE_H

#include <vector>

class Trie{
    private:
        bool isEndOfWord;
        std::vector<Trie *> children;
        Trie();
        Trie* getNode();
    public:
        friend class Autocomplete;
        friend class PrefixMatcher;
};
#endif
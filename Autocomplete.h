#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "Trie.h"
#include <vector>
#include <string>

class Autocomplete: private Trie{
    public:
        std::vector<std::string> getSuggestions(std::string partialWord);
        void insert(std::string word);
};
#endif
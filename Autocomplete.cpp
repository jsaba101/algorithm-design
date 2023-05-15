#include "Autocomplete.h"
#include <iostream>

using namespace std;

void Autocomplete::insert(string word){
    root = getNode();
    Trie *next = root;
    for (int i = 0; i < word.length(); i++){
        int index = word[i] - 'a';
        if (next->children.at(i) == nullptr){
            next->children.at(i) = getNode();
        }
        next = next->children.at(i);
    }
 
    next->isEndOfWord = true;
}

vector<string> Autocomplete::getSuggestions(string partialWord){
    vector<string> suggestions;
    int index;
    Trie* next = root;

    for (int i = 0; i < partialWord.length(); i++){
        index = (int)partialWord.at(i) - (int)'a';
        next = next->children.at(i);
    }

    traversal(partialWord, next, suggestions);

    return suggestions;
}

void Autocomplete::traversal(string partialWord, Trie* next, vector<string> result){
    if (next->isEndOfWord == true){
        result.push_back(partialWord);
    }

    for (int i = 0; i < 26; i++){
        if (next->children.at(i)){
            traversal(partialWord + (char)('a' + i), next->children[i], result);
        }
    }
}
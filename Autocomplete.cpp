#include "Autocomplete.h"
#include <iostream>
#define ALPHABET 26

using namespace std;

void Autocomplete::insert(string word){
    Trie* next = root;
    for (int i = 0; i < word.length(); i++){
        int index = (int)word.at(i) - (int)'a';
        if (!next->children.at(index)){
            next->children.at(index) = getNode();
        }
        next = next->children.at(index);
    }
 
    next->isEndOfWord = true;
}

vector<string> Autocomplete::getSuggestions(string partialWord){
    vector<string> suggestions;
    int index;
    Trie* next = root;

    for (int i = 0; i < partialWord.length(); i++){
        index = (int)partialWord.at(i) - (int)'a';
        next = next->children.at(index);
    }

    traverse(partialWord, next, suggestions);

    return suggestions;
}

void Autocomplete::traverse(string partialWord, Trie* next, vector<string> result){
    if (next->isEndOfWord){
        result.push_back(partialWord);
    }

    for (int i = 0; i < ALPHABET; i++){
        if (next->children.at(i)){
            traverse(partialWord + (char)('a' + i), next->children[i], result);
        }
    }
}
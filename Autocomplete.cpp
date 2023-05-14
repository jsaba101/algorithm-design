#include "Autocomplete.h"
#include <iostream>

using namespace std;

vector<string> Autocomplete::getSuggestions(string partialWord){
    vector<string> suggestions;
    Trie *root = new Trie();
    if (root->isEndOfWord){
        cout << partialWord << endl;
    }

    for (int i = 0; i < children.size(); i++){
        if (root->children[i]){
            char child = 'a' + i;
            suggestions[i].push_back(child);
            root->children[i];
            getSuggestions(partialWord + child);
        }
    }
    return suggestions;
}

void Autocomplete::insert(string word){
    Trie *root = new Trie();
    Trie *next = root;
    for (int i = 0; i < word.length(); i++){
        int index = (int)word[i] - (int)'a';
        if (!next->children[index]){
            next->children[index] = new Trie();
        }
        next = next->children[index];
    }
 
    next->isEndOfWord = true;
}
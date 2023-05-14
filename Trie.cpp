#include "Trie.h"

using namespace std;

Trie::Trie(){
    isEndOfWord;
    vector<Trie *> children;
}

Trie* Trie::getNode(){
    Trie *newNode = new Trie();
    newNode->isEndOfWord = false;

    for (int i = 0; i < children.size(); i++){
        newNode->children[i] = nullptr;
    }
    return newNode;
}
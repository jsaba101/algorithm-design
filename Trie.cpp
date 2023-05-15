#include "Trie.h"

using namespace std;

Trie::Trie(){
    bool isEndOfWord;
    vector<Trie *> children;
}

Trie* Trie::getNode(){
    Trie *newNode = new Trie();
    newNode->isEndOfWord = false;
    children.reserve(26);

    for (int i = 0; i < children.size(); i++){
        newNode->children.at(i) = nullptr;
    }
    return newNode;
}
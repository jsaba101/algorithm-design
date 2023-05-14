#include "Trie.h"

using namespace std;

Trie::Trie(){
    children.push_back(NULL);
    isEndOfWord = false;
}
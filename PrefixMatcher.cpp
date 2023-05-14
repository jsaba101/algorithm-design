#include "PrefixMatcher.h"
#include <iostream>

using namespace std;

int PrefixMatcher::selectRouter(string networkAddress){
    if (networkAddress.length() == 0){
        return -1;
    }

    Trie *root = new Trie();
    Trie *currNode = root;
    string longestMatch = "";
    string sequence = "";
    int index = 0;

    while (index < networkAddress.length()){
        if (currNode->children[index] == nullptr){
            break;
        }
        currNode = currNode->children[index];

        if (currNode != nullptr){
            sequence += networkAddress.at(index);
            if (currNode->isEndOfWord == true){
                longestMatch = sequence;
            }
        }
        index++;
    }

    int routerNumber = 0;
    for (int i = 0; i < routers.size(); i++){
        if (longestMatch == routers.at(i)){
            routerNumber = i;
            break;
        }
    }
    return routerNumber;
}

void PrefixMatcher::insert(string address, int routerNumber){
    if (address.length() == 0){
        return;
    }

    routers.insert({routerNumber, address});

    Trie *root = new Trie();
    Trie *currNode = root;
    int index = 0;

    while (index < address.length()){
        int indexChild = address[index];

        if (indexChild < 0 || indexChild >= children.size()){
            cout << "Invalid address" << endl;
            return;
        } 

        if (currNode->children[indexChild] == nullptr){
            currNode->children[indexChild] = new Trie();
        }

        currNode = currNode->children[indexChild];
        index++;
    }
    currNode->isEndOfWord = true;
}
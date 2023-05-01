#include "LinkedList.h"
#include <list>
#include <limits>
#include <iostream>

using namespace std;

LinkedList::LinkedList(){
    list<int> newList;
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len){
    list<int> newList;
    for (int i = 0; i < len; i++){
        insertPosition(i, array[i]);
    }
}

LinkedList::~LinkedList(){
    while (head != nullptr){
        deletePosition(1);
    }
}

void LinkedList::printList(){
    if (head == nullptr){
        return;
    }
    else {
        Node* currNode = head;

        cout << "[ ";
        while (currNode != nullptr){
            cout << currNode->data;
            currNode = currNode->link;
        }
        cout << " ]" << endl;
    }
}

Node* LinkedList::traverse(int index){
    int position = 0;
    Node* currNode = head;

    while (currNode != nullptr && position < index) {
        currNode = currNode->link;
        position++;
    }

    return currNode;
}

void LinkedList::insertPosition(int pos, int newNum){
    Node *newNode = new Node(newNum, NULL);
    Node *prevNode = traverse(pos-1);

    if (pos <= 1){
        head = newNode;
    }
    else if (prevNode->link == nullptr){
        prevNode->link = newNode;
    }
    
    newNode->link = prevNode->link;
    prevNode->link = newNode;    
}

bool LinkedList::deletePosition(int pos){
    Node *prevNode = traverse(pos-1);

    if (prevNode->link == nullptr){
        return false;
    }

    Node *temp;
    temp = prevNode->link;
    prevNode->link = temp->link;
    delete temp;

    return true;

}

int LinkedList::get(int pos){
    Node *getNode = traverse(pos);
    if (getNode->link == nullptr){
        cout << numeric_limits < int >::max() << "\n";
    }
    int data = getNode->data;
    return data;
}

int LinkedList::search(int target){
    int counter = 0;
    Node *currNode = head;
    while (currNode != NULL) {
        counter++;
        currNode = currNode->link;
    }

    for (int i = 0; i < counter; i++){
        Node *targetNode = traverse(i);
        if (targetNode->data == target){
            return target;
        }
    }

    return -1;
}
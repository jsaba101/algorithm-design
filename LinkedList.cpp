#include "LinkedList.h"
#include <list>
#include <limits>
#include <iostream>

using namespace std;

LinkedList::LinkedList(){
    list<int> newList;
}

LinkedList::LinkedList(int* array, int len){
    Node *temp;
    Node *tail;
    head = new Node(array[0], NULL);
    tail = head;

    for (int i = 1; i < len; i++){
        temp = new Node(0, 0);
        temp->data = array[i];
        temp->link = NULL;
        tail->link = temp;
        tail = temp;
    }
}

LinkedList::~LinkedList(){
    while (head != nullptr){
        Node* temp = head;
        head = head->link;
        free(temp);
    }
}

void LinkedList::printList(){
    Node* currNode = head;

    cout << "[";
    while (currNode != nullptr){
        cout << currNode->data << endl;
        currNode = currNode->link;
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
    if (pos == 0){
        head = new Node(newNum, head);
        return;
    }

    Node *prevNode = traverse(pos-1);

    if (prevNode == nullptr) {
        return;
    }
    Node *newNode = new Node(newNum, prevNode->link);
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
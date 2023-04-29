#ifndef NODE_H
#define NODE_H

class Node{
    private:
        int data;
        Node* link;
    public:
        Node(int, Node*);

        friend class LinkedList;
        friend class BigNumCalc;
};
#endif
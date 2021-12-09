//
// Created by ag629 on 08.12.2021.
//

#ifndef STACK_NODE_H
#define STACK_NODE_H
class Node{
public :
    int data;
    Node* next;
    Node(int _data, Node* _next == nullptr):data(_data), next(_next);
};
#endif //STACK_NODE_H

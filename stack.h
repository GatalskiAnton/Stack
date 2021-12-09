//
// Created by ag629 on 08.12.2021.
//
#include "Node.h"

#ifndef STACK_STACK_H
#define STACK_STACK_H


class Stack {
public:
    Stack() : top(nullptr) {};
    void push(int& value);
private:
    Node *top;
};


#endif //STACK_STACK_H

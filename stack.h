//
// Created by ag629 on 08.12.2021.
//
#include "Node.h"
#include <iostream>
#ifndef STACK_STACK_H
#define STACK_STACK_H


class Stack {
public:
    int size;
    Stack() : size(0), top(nullptr) {};
    void push(const int& value);
    int pop();
    bool IsEmpty();
    int Top();
    void print(std::ostream& out);
private:
    Node *top;
};


#endif //STACK_STACK_H

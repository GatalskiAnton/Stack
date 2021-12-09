//
// Created by ag629 on 08.12.2021.
//
#include "stack.h"

void Stack::push(int& value) {
 Node* newnode = new Node(value,top);
 top = newnode;
 
}

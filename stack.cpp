#include "stack.h"

void Stack::push(const int &value) {
    Node *node = new Node(value, top);
    top = node;
    size++;
}

int Stack::pop() {
    if (IsEmpty()) {
        throw std::runtime_error("Stack is empty");
    }
    int result = top->data;
    Node *old = top;
    size--;
    top = top->next;
    delete old;
    return result;
}

bool Stack::IsEmpty() {
    return !size;
}

int Stack::Top() {
    if (IsEmpty()) {
        throw std::runtime_error("Stack is empty");
    }
    return top->data;
}

void Stack::print(std::ostream& out) {
    Node* cur = top;
    while(cur != nullptr){
        out << cur->data << " ";
        cur = cur->next;
    }
}


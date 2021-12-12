#include <iostream>
#include "stack.h"
int main() {
    Stack stack;
    stack.push(123);
    stack.push(321);
    stack.push(12312);
    stack.print(std::cout);
    return 0;
}

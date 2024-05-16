#include "stack.h"
#include <iostream>


Stack::Stack() {}


Stack::Stack(const Stack& other) : stack(other.stack) {}


Stack& Stack::operator=(const Stack& other) {
    if (this != &other) {
        stack = other.stack;
    }
    return *this;
}


void Stack::push(int elem) {
    stack.push_back(elem);
}


int Stack::pop() {
    if (isEmpty()) {
        std::cerr << "Error. Stack is empty" << std::endl;
        return -1; // або будь-яке інше значення, що позначає помилку
    }
    int topElem = stack.back();
    stack.pop_back();
    return topElem;
}


bool Stack::isEmpty() const {
    return stack.empty();
}


void Stack::multiPop(int N) {
    for (int i = 0; i < N; ++i) {
        if (!isEmpty()) {
            pop();
        }
        else {
            std::cerr << "Stack is empty" << std::endl;
            break;
        }
    }
}


void Stack::show() const {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
   
    for (size_t i = 0; i < stack.size(); ++i) {
        std::cout << stack[i];
        if (i < stack.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

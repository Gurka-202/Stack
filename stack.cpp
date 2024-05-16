#include "stack.h"
#include <iostream>

// Конструктор за замовчуванням
Stack::Stack() {}

// Конструктор копіювання
Stack::Stack(const Stack& other) : stack(other.stack) {}

// Оператор присвоєння
Stack& Stack::operator=(const Stack& other) {
    if (this != &other) {
        stack = other.stack;
    }
    return *this;
}

// Додавання елемента в вершину стека
void Stack::push(int elem) {
    stack.push_back(elem);
}

// Видалення елемента з вершини стека і повернення його значення
int Stack::pop() {
    if (isEmpty()) {
        std::cerr << "Error. Stack is empty" << std::endl;
        return -1; // або будь-яке інше значення, що позначає помилку
    }
    int topElem = stack.back();
    stack.pop_back();
    return topElem;
}

// Перевірка, чи порожній стек
bool Stack::isEmpty() const {
    return stack.empty();
}

// Виштовхування кількох елементів
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

// Метод для показу всіх елементів, що знаходяться в стеці
void Stack::show() const {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    //std::cout << "Show elements: ";
    for (size_t i = 0; i < stack.size(); ++i) {
        std::cout << stack[i];
        if (i < stack.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
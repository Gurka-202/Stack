#ifndef STACK_H
#define STACK_H

#include <vector>

class Stack {
private:
    std::vector<int> stack;

public:
    Stack(); 
    Stack(const Stack& other); 
    Stack& operator=(const Stack& other); 
    void push(int elem);
    int pop();
    bool isEmpty() const;
    void multiPop(int N);
    void show() const;
};

#endif 



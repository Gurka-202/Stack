#include "stack.h"
#include <iostream>

using namespace std;

int main() {
    Stack s;
    int choice, element, count;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Push\n";
        std::cout << "2. Pop\n";
        std::cout << "3. Empty?\n";
        std::cout << "4. MultiPop\n";
        std::cout << "5. Show\n";
        std::cout << "6. End\n";
        //std::cout << "Choose: ";
        std::cin >> choice;


        switch (choice) {
        case 1:
            std::cout << "push: ";
            std::cin >> element;
            s.push(element);
            break;
        case 2:
            std::cout << "Pop: " << s.pop() << std::endl;
            break;
        case 3:
            std::cout << "Empty " << (s.isEmpty() ? "Yeah" : "No") << std::endl;
            break;
        case 4:
            std::cout << "Multipop: ";
            std::cin >> count;
            s.multiPop(count);
            break;
        case 5:
            s.show();
            break;
        case 6:
            std::cout << "End....\n";
            break;
        default:
            std::cout << "Errror\n";
            break;
        }
    } while (choice != 6);

    return 0;
}
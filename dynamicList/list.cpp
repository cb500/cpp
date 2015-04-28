#include <iostream>
#include "list.h"
List::List() {
    std::cout << "List constructor\n";
    std::cout << "============================================\n";
}
List::~List() {
    std::cout << "\n============================================\n";
    std::cout << "List destructor\n";
    std::cout << "============================================\n";
}
bool List::add(int value) {
    Node *node = new Node;
    node->value = value;
    
    if (!this->first) {
        this->first = node;
    } else {
        Node *onde = this->first;
        while (onde->next) {
            onde = onde->next;
        }
        onde->next = node;
    }
    return true;
}
bool List::show() {
    std::cout << "List Show\n";
    std::cout << "============================================\n";
    Node *onde = this->first;
    while (onde) {
        std::cout << onde->value;
        if (onde->next) {
            std::cout << ", ";
        }
        onde = onde->next;
    }
    return true;
}
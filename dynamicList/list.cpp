#include <iostream>
#include "list.h"
List::List() {
    std::cout << "List constructor\n";
    std::cout << "============================================\n";
    this->first = NULL;
}
List::~List() {
    std::cout << "\n============================================\n";
    std::cout << "List destructor\n";
    std::cout << "============================================\n";
    Node *anterior;
    Node *onde = this->first;
    while (onde->next) {
        anterior = onde;
        onde = onde->next;
        delete anterior;
    }
    delete onde;
}
bool List::add(int value) {
    if (this->first) {
        Node *onde = this->first;
        while (onde->next) {
            onde = onde->next;
        }
        onde->next = new Node;
        onde->next->value = value;
    } else {
        this->first = new Node;
        this->first->value = value;
    }
    return true;
}
bool List::remove(int value) {
    Node *anterior;
    Node *onde = this->first;
    while (onde) {
        if (value == onde->value) {
            if (onde == this->first) {
                this->first = onde->next;
            } else {
                anterior->next = onde->next;
            }
            delete onde;
            break;
        } else {
            anterior = onde;
            onde = onde->next;
        }
    }
}
bool List::show() {
    std::cout << "============================================\n";
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
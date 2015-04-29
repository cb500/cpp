/**
 *
 */
#include <iostream>
#include <cstring>
#include "list.h"
List::List() {
    this->qtd = 0;
    std::cout << "List constructor\n";
    std::cout << "============================================\n";
}
List::~List() {
    std::cout << "\n============================================\n";
    std::cout << "List destructor\n";
    std::cout << "============================================\n";
}
int List::add(int value) {
    if (this->qtd == List::MAX) {
        return 0;
    }
    this->value[this->qtd] = value;
    this->qtd++;
    return 1;
}
int List::remove(int value) {
    int index = 0;
    for (index; index < this->qtd; index++) {
        if (value == this->value[index]) {
            break;
        }
    }
    if (index+1 < this->qtd) {
        memmove(&this->value[index], &this->value[index+1], sizeof(int) * ((this->qtd-1) - index));
    }
    if (index < List::MAX) {
        std::cout << "============================================\n";
        std::cout << "removed value: " << value << "\n";
        this->qtd--;
    }
    return 1;
}
int List::show() {
    std::cout << "============================================\n";
    std::cout << "listing " << this->qtd << " elements\n";
    for (int index = 0; index < this->qtd; index++) {
        std::cout << this->value[index];
        if (index+1 < this->qtd) {
            std::cout << ", ";
        }
    }
    return 1;
}
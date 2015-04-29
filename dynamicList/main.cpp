/* 
 * File:   main.cpp
 * Author: vagrant
 *
 * Created on April 28, 2015, 12:51 PM
 */

#include <iostream>
#include "list.h"

using namespace std;

/*
 * 
 */
int main() {
    std::cout << "============================================\n";
    std::cout << "Lista dinamica | inteiros\n";
    std::cout << "============================================\n";
    
    int value;
    List* list = new List;
    do {
        std::cout << "Informe o numero a ser inserido a lista: (0 para sair)";
        std::cin >> value;
        if (value > 0) {
            list->add(value);
        }
    } while (value != 0);
    list->remove(1);
    list->show();
    delete list;
    return 0;
}


/* 
 * File:   main.cpp
 * Author: vagrant
 *
 * Created on April 27, 2015, 1:55 PM
 */
#include <iostream>
#include "list.h"
/*
 * 
 */
int main(/*int argc, char** argv*/) {
    std::cout << "Lista de inteiros\n";
    std::cout << "============================================\n";
    
    int value;
    List* list = new List;
    do {
        std::cout << "Informe o numero a ser inserido a lista: (0 para sair)";
        std::cin >> value;
        list->add(value);
    } while (value != 0);
    list->show();
    delete list;
    return 0;
}

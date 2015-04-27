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
    std::cout << "Criacao de lista com o maximo de " << MAX << " itens\n";
    std::cout << "============================================\n";
    
    list* lst = constructor();
    add(lst, 3);
    add(lst, 6);
    add(lst, 9);
//    remove(lst, 6);
    show(lst);
    destructor(lst);
    return 0;
}

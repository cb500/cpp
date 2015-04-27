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
    std::cout << "Criacao de lista com o maximo de " << List::MAX << " itens\n";
    std::cout << "============================================\n";

    List lst;
    lst.add(3);
    lst.add(6);
    lst.add(9);
    lst.remove(6);
    lst.show();
    return 0;
}

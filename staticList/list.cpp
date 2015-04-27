#include <iostream>
#include <stdlib.h>
#include "list.h"

list* constructor()
{
    list* lst;
    lst = (list*) malloc(sizeof(int) * MAX);
    if (NULL == lst) { return 0; }
    lst->qtd = 0;
    std::cout << "constructor\n";
    std::cout << "============================================\n";
    return lst;
}
int destructor(list* lst)
{
    if (NULL == lst) { return 0; }
    std::cout << "destructor\n";
    std::cout << "============================================\n";
    free(lst);
    if (NULL != lst) {
        return 0;
    }
    return 1;
}
int add(list* lst, int value)
{
    if (NULL == lst) { return 0; }
    lst->value[lst->qtd] = value;
    lst->qtd++;
    std::cout << "add value: " << value << "\n";
    std::cout << "total: " << lst->qtd << "\n";
    std::cout << "============================================\n";
    return 1;
}
int remove(list* lst, int value)
{
    if (NULL == lst) { return 0; }
    lst->qtd--;
    std::cout << "remove value: " << value << "\n";
    std::cout << "total: " << lst->qtd << "\n";
    std::cout << "============================================\n";
    return 1;
}
int show(list* lst)
{
    if (NULL == lst) { return 0; }
    std::cout << "listing " << lst->qtd << " elements\n";
    for (int index = 0; index < lst->qtd; index++) {
        std::cout << lst->value[index];
        if (index+1 < lst->qtd) {
            std::cout << ", ";
        }
    }
    std::cout << "\n============================================\n";
    return 1;
}

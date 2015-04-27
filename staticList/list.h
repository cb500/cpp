/* 
 * File:   list.h
 * Author: vagrant
 *
 * Created on April 27, 2015, 2:16 PM
 */

#ifndef LIST_H
#define	LIST_H
const int MAX = 5;

struct list {
    int qtd;
    int value[MAX];
};

list* constructor();
int destructor(list* lst);
int add(list* lst, int value);
int remove(list* lst, int value);
int show(list* lst);
#endif	/* LIST_H */

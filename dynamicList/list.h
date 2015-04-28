/* 
 * File:   list.h
 * Author: vagrant
 *
 * Created on April 28, 2015, 2:31 PM
 */

#ifndef LIST_H
#define	LIST_H

class List
{
    struct Node {
        int value;
        Node *next;
    } *first;
    public:
        List();
        ~List();
        bool add(int value);
        bool show();
};
#endif

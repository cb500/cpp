/* 
 * File:   list.h
 * Author: vagrant
 *
 * Created on April 27, 2015, 2:16 PM
 */
#ifndef LIST_H
#define	LIST_H
class List {
    public:
        static const int MAX = 5;
        int add(int value);
        int remove(int value);
        int show();
        List();
        ~List();
    private:
        int qtd;
        int value[List::MAX];
};
#endif

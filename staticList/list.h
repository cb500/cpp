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
    private:
        int qtd;
        int value[MAX];
    public:
        List() {
            std::cout << "List constructor\n";
            this->qtd = 0;
        }
        ~List() {
            std::cout << "List destructor\n";
        }
        int add(int value)
        {
            this->value[this->qtd] = value;
            this->qtd++;
            std::cout << "add value: " << value << "\n";
            std::cout << "total: " << this->qtd << "\n";
            std::cout << "============================================\n";
            return 1;
        }
        int remove(int value)
        {
            for (int index = 0; index < this->qtd; index++) {
                if (value == this->value[index] && index < this->qtd) {
                    this->value[index] = this->value[index+1];
                }
            }
            this->qtd--;
            std::cout << "remove value: " << value << "\n";
            std::cout << "total: " << this->qtd << "\n";
            std::cout << "============================================\n";
            return 1;
        }
        int show()
        {
            std::cout << "listing " << this->qtd << " elements\n";
            for (int index = 0; index < this->qtd; index++) {
                std::cout << this->value[index];
                if (index+1 < this->qtd) {
                    std::cout << ", ";
                }
            }
            std::cout << "\n============================================\n";
            return 1;
        }
};
#endif

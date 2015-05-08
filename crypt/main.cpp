/* 
 * File:   main.cpp
 * Author: vagrant
 *
 * Created on May 7, 2015, 11:09 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "crypt.h"
/*
 * 
 */
int main() {
    using namespace std;
    cout << "Digite o texto a ser criptografado.\n";

    string plaintext;
    getline(cin, plaintext);

    Crypt *crypt = new Crypt;
    crypt->setPlaintext(plaintext);
    crypt->doCrypt();

    cout << endl;
    cout << "Texto sem crypt: " << crypt->getPlaintext() << endl;
    cout << "Texto com crypt: " << crypt->getCryptedtext().data() << endl;

    crypt->doDecrypt();
    cout << "Texto com decrypt: " << crypt->getCryptedtext().data() << endl;
    delete crypt;

    return 0;
}

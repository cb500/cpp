/* 
 * File:   crypt.h
 * Author: vagrant
 *
 * Created on May 7, 2015, 11:09 AM
 */

#ifndef CRYPT_H
#define	CRYPT_H
#include <string>
class Crypt
{
    std::string salt;
    std::string plaintext;
    std::string cryptedtext;
    public:
        Crypt();
        std::string getPlaintext();
        std::string getCryptedtext();
        void setPlaintext(std::string plaintext);
        void doCrypt();
        void doDecrypt();
};
#endif	/* CRYPT_H */

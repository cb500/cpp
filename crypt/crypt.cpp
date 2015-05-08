/**
 *
 */
#include <string>
#include <string.h>
#include <iostream>
#include <bitset>
#include "crypt.h"
#include "base64.h"
/**
 * 
 */
Crypt::Crypt(){
    this->salt = "segredoparageracaodocrypt";
}
std::string Crypt::getPlaintext()
{
    return this->plaintext;
}
std::string Crypt::getCryptedtext()
{
    return this->cryptedtext;
}
void Crypt::setPlaintext(std::string plaintext)
{
    this->plaintext = plaintext;
}
void Crypt::doCrypt() {
    std::string encrypted;
    int index;
    int stringSize = this->plaintext.length();
    for (index = 0; index < stringSize; index++) {
        int saltIndex;
        saltIndex = index > this->salt.size() ? index % this->salt.size() : index;
        encrypted[index] = this->plaintext[index] ^ this->salt[saltIndex];
    }
    this->cryptedtext = base64_encode(encrypted.data());
}
void Crypt::doDecrypt() {
    std::string decripted;
	std::string tmpText;
    decripted = base64_decode(this->cryptedtext);
    int index;
    int stringSize = decripted.length();
    for (index = 0; index < stringSize; index++) {
        int saltIndex;
        saltIndex = index > this->salt.size() ? index % this->salt.size() : index;
        tmpText[index] = (decripted[index] ^ this->salt[saltIndex]);
    }
	
	this->cryptedtext = tmpText;
}
/** /
std::cout << "\n";
std::cout << std::bitset<8>(toCrypt[index]) << "\n";
std::cout << std::bitset<8>(this->salt[saltIndex]) << " | " << "\n";
std::cout << "========\n";
std::cout << std::bitset<8>(toCrypt[index] ^ this->salt[saltIndex]) << " | " << (toCrypt[index] ^ this->salt[saltIndex]) << "\n";
std::cout << base64_encode(this->cryptedtext) << "\n";
std::string tmp = base64_decode(base64_encode("0"));
std::cout << "| " << sizeof(tmp)/8 << " |";
std::cout << std::bitset<8>(tmp[0]) << "\n";
std::cout << std::bitset<8>(this->salt[saltIndex]) << "\n";
std::cout << "========\n";
std::cout << std::bitset<8>((toCrypt[index] ^ this->salt[saltIndex]) ^ this->salt[saltIndex]);
/**/
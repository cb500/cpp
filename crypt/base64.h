/* 
 * File:   base64.h
 * Author: vagrant
 *
 * Created on May 7, 2015, 5:35 PM
 */

#ifndef BASE64_H
#define	BASE64_H
#include <string>
std::string base64_encode(std::string const&);
std::string base64_encode(unsigned char const* , unsigned int len);
std::string base64_decode(std::string const& s);
#endif	/* BASE64_H */

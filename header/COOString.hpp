/*
 * COOString.hpp
 *
 *  Created on: 11 janv. 2020
 *      Author: rouil
 */

#ifndef HEADER_COOSTRING_HPP_
#define HEADER_COOSTRING_HPP_
#include "COOObject.hpp"


/**
 * @brief implementation of String inherited from COOObject to be used by cooref.
 * @class COOString
 */
class COOString:public COOObject{
	std::string val;

public:
	COOString(std::string val);
	~COOString();

	COOString* operator+(COOString& ope);

	std::string getVal();

	std::string toString() const;
};



#endif /* HEADER_COOSTRING_HPP_ */

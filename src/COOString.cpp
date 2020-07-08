/*
 * COOString.cpp
 *
 *  Created on: 11 janv. 2020
 *      Author: rouil
 */
#include "../header/COOString.hpp"

/**
 * @brief Constructor initialize the attribute.
 * @param val
 */
COOString::COOString(std::string val){
	this->val= val;
}

COOString::~COOString(){

}

/**
 * @brief Calls the concat function(+) of std::string between the attribute of the current object and those of ope.
 * @param ope
 * @return
 */
COOString* COOString::operator +(COOString& ope){
	COOString* res= new COOString(this->val + ope.val);
	return res;
}

/**
 * @brief return the value of val if you want to know.
 * @return
 */
std::string COOString::getVal(){
	return val;
}

/**
 *
 * @return
 */
std::string COOString::toString()const{

	return val;
}


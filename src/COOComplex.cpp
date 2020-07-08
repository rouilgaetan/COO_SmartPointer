/*
 * COOComplex.cpp
 *
 *  Created on: 7 janv. 2020
 *      Author: rouil
 */
#include "../header/COOComplex.hpp"
#include "../header/COOObject.hpp"
#include<iostream>

/**
 * @brief Constructor with double
 * @param v
 */
COOComplex::COOComplex(double v){
	val=v;
}

/**
 * @brief destructor (does nothing, no pointer);
 */
COOComplex::~COOComplex(){

}

/**
 * @brief Affect the value of val to the value of the current object.
 * @param val
 */
void COOComplex::operator=(COOComplex& val){
	this->val=val.getVal();
}

/**
 * @brief Handles the addition between the val of two COOComplex.
 * @param ope
 * @return
 */
COOComplex* COOComplex::operator+(COOComplex& ope){
	COOComplex* res= new COOComplex(this->getVal()+ope.getVal());
	return res;
}


/**
 * @brief Handles the substraction between the val of two COOComplex.
 * @param ope
 * @return
 */
COOComplex* COOComplex::operator-(COOComplex& ope){
	COOComplex* res= new COOComplex(this->getVal()-ope.getVal());
	return res;
}

/**
 * @brief display the toString function of COOObject.
 */
void COOComplex::affiche(){
	std::cout<<COOObject::toString()<<std::endl;
}

/**
 * @brief Well isn't it quite obvious ?
 * @return
 */
int COOComplex::getVal(){
	return val;
}

/**
 * @brief overload the toString of COOObject to display the value of the current object's attribute
 * @return
 */
std::string COOComplex::toString()const{
	std::string res = std::to_string(this->val);
	return res;
}




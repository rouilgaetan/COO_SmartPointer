/*
 * COOObject.cpp
 *
 *  Created on: 7 janv. 2020
 *      Author: rouil
 */
#include"../header/COOObject.hpp"

/**
 * @brief initialize the number of ref.
 */
COOObject::COOObject(){
	nb_ref=0;
}

COOObject::~COOObject(){

}


/**
 * @brief Displays id and concrete type of the object.
 * @return
 */
std::string COOObject::toString() const{
	int id = hashCode();
	std::string res = "id : "+std::to_string(id)+"\nType : "+typeid(*this).name();
	return res;
}

/**
 * @brief returns unique id of the object (his address).
 * @return
 */
int COOObject::hashCode()const{
	return (long)(this);
}



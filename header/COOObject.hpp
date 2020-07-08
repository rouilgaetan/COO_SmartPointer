/*
 * COOObject.hpp
 *
 *  Created on: 7 janv. 2020
 *      Author: rouil
 */

#ifndef HEADER_COOOBJECT_HPP_
#define HEADER_COOOBJECT_HPP_

#include<string>
#include "cooref.hpp"

/**
 * @brief Representation of object, set to be handled by cooref.
 * @class COOObject
 */
class COOObject{
	int nb_ref;
	template<typename T> friend void cooref<T>::dec_ref(T* o);
	template<typename T> friend void cooref<T>::inc_ref(T* o);
	template<typename T> friend int cooref<T>::getNb_ref(T* o);

public :
	COOObject();

	virtual ~COOObject();

	virtual std::string toString() const;

	int hashCode()const;

};



#endif /* HEADER_COOOBJECT_HPP_ */

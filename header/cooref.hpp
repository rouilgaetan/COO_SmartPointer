/*
 * COORef.hpp
 *
 *  Created on: 7 janv. 2020
 *      Author: rouil
 */

#ifndef HEADER_COOREF_HPP_
#define HEADER_COOREF_HPP_


#include<iostream>

/**
 * @brief cooref represents a reference on an object whose type is T.
 * @class cooref
 */
template <typename T> class cooref{
	T* objet;
	void inc_ref(T* o);
	void dec_ref(T* o);


public:
	cooref(T* obj);
	cooref(const cooref<T>& ref);
	~cooref();

	void operator=(cooref<T> ope);
	cooref<T> operator+(cooref<T> ope);
	cooref<T> operator-(cooref<T> ope);

	std::ostream& write(std::ostream& out) const;
	T* operator->();

	int getNb_ref(T* o);
};

/**
 * @brief Construct a new reference on the specified object, increments the number of references of the object.
 * @param obj
 */
template<typename T>
cooref<T>::cooref(T* obj){
	this->objet=obj;
	this->inc_ref(objet);
}

/**
 * @brief Copy Constructor
 * @param ref
 */
template<typename T>
cooref<T>::cooref(const cooref<T>& ref){
	this->objet=ref.objet;
	this->inc_ref(objet);
}


/**
 *@brief destructor handles the number of references on the pointed object.
 */
template<typename T>
cooref<T>::~cooref(){
	if (getNb_ref(objet)==0){
		delete (objet);
	}
	else{
		dec_ref(objet);
	}
}



/**
 * @brief Affect operator
 * @param ope
 */
template<typename T>
void cooref<T>::operator=(cooref<T> ope){
	this->objet=ope.objet;
}

/**
 * @brief Decrements number of reference of the object. Used in destructor.
 * @param o The attribute of the instance of cooref.
 */
template<typename T>
void cooref<T>::dec_ref(T* o){
	o->nb_ref--;
}

/**
 * @brief Increments Reference of the object. Used in constructor.
 * @param o The attribute of the instance of cooref.
 */
template<typename T>
void cooref<T>::inc_ref(T* o){
	o->nb_ref++;
}

/**
 * @brief get the number of reference on the object. Used in destructor.
 * @param o The attribute of the instance of cooref.
 * @return int
 */
template<typename T>
int cooref<T>::getNb_ref(T* o){
	return o->nb_ref;
}
/**
 * @brief Calls the operator + defined in the object class.
 * @param ope
 * @return cooref<T>
 */
template<typename T>
cooref<T> cooref<T>::operator +(cooref<T> ope){
	cooref<T> res(*(this->objet)+*(ope.objet));
	return res;
}

/**
 * @brief Calls the operator - defined in the object class.
 * @param ope
 * @return cooref<T>
 */
template<typename T>
cooref<T> cooref<T>::operator-(cooref<T> ope){
	cooref<T> res(*(this->objet)-*(ope.objet));
	return res;
}

/**
 * @brief Used by the overloaded operator << to display object.
 * @param out A stream to be displayed
 * @return the parameter
 */
template<typename T>
std::ostream& cooref<T>::write(std::ostream& out) const {
	out<<objet->toString();;
	return out;
}


/**
 * @brief Used to call the attribute objet function.
 * @return the attribute objet.
 */
template<typename T>
T* cooref<T>::operator->(){
	return objet;
}

#endif /* HEADER_COOREF_HPP_ */

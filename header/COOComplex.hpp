/*****************************************************s
 * COOComplex.hpp
 *
 *  Created on: 7 janv. 2020
 *      Author: rouil
 */

#ifndef HEADER_COOCOMPLEX_HPP_
#define HEADER_COOCOMPLEX_HPP_

#include "COOObject.hpp"

/**
 * @brief Implementation of complex numbers, inherited from COOObject to be used by cooref.
 * @class COOComplex
 */
class COOComplex:public COOObject{
	double val;

public:
	COOComplex(double v);

	~COOComplex();

	void operator=(COOComplex& val);

	COOComplex* operator+(COOComplex& ope);
	COOComplex* operator-(COOComplex& ope);

	void affiche();

	int getVal();

	std::string toString() const;

};



#endif /* HEADER_COOCOMPLEX_HPP_ */

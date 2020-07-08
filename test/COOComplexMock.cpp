/*
 * COOComplexMock.cpp
 *
 *  Created on: 13 janv. 2020
 *      Author: rouil
 */

#include<iostream>
#include "../header/COOObject.hpp"

class COOComplexMock:public COOObject{

	double val;

public:
	COOComplexMock(double v):COOObject(){
		val=v;
	}

	~COOComplexMock(){

	}

	void operator=(COOComplexMock& ope){
		this->val=ope.getVal();
	}

	COOComplexMock* operator+(COOComplexMock& ope){
		return new COOComplexMock(12);
	}

	COOComplexMock* operator-(COOComplexMock& ope){
		return new COOComplexMock(13);
	}

	void affiche(){
		std::cout<<"Affiche"<<std::endl;
	}

	int getVal(){
		return val;
	}



};



/*
 * COOComplexTest.cpp
 *
 *  Created on: 13 janv. 2020
 *      Author: rouil
 */

#include "COOComplexTest.hpp"



void COOComplexTest::setUp(){
	test1=new COOComplex(1);
	test2= new COOComplex(2);
}


void COOComplexTest::tearDown(){
	delete test1;
	delete test2;
}

void COOComplexTest::testConstructor(){
	CPPUNIT_ASSERT(test1->getVal()==1);
}

void COOComplexTest::testOperatorAffect(){
	*test1=*test2;
	CPPUNIT_ASSERT(test1->getVal()==test2->getVal());
}


void COOComplexTest::testOperatorAdd(){
	test1= *test1+*test1;
	CPPUNIT_ASSERT(test1->getVal()==2);
}

void COOComplexTest::testOperatorSub(){
	test2= *test2-*test1;
	CPPUNIT_ASSERT(test2->getVal()==1);
}


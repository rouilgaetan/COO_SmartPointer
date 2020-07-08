/*
 * COOStringTest.cpp
 *
 *  Created on: 13 janv. 2020
 *      Author: rouil
 */

#include "COOStringTest.hpp"



void COOStringTest::setUp(){
	test = new COOString("Ha ");
}


void COOStringTest::tearDown(){
	delete test;
}

void COOStringTest::testConstructor(){
	CPPUNIT_ASSERT(test->getVal().compare("Ha ")==0);
}


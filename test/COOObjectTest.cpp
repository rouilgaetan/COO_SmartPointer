/*
 * COOObjectTest.cpp
 *
 *  Created on: 13 janv. 2020
 *      Author: rouil
 */

#include "COOObjectTest.hpp"


void COOObjectTest::setUp(){
	test=new COOObject();
}

void COOObjectTest::tearDown(){
	delete test;
}

void COOObjectTest::hashCodeTestPersist(){
	int v1 = test->hashCode();
	int v2 = test->hashCode();
	CPPUNIT_ASSERT(v1==v2);
}

void COOObjectTest::hashCodeTestUnic(){
	COOObject* valtab[100000];
	for(int i=0; i<100000; i++){
		valtab[i]= new COOObject();
		int v1=valtab[i]->hashCode();
		int v2= test->hashCode();
		CPPUNIT_ASSERT(v1!=v2);
	}
}


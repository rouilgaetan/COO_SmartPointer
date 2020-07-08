/*
 * coorefTest.cpp
 *
 *  Created on: 13 janv. 2020
 *      Author: rouil
 */

#include"coorefTest.hpp"

void coorefTest::setUp(){

}

void coorefTest::tearDown(){

}

void coorefTest::inc_refTest(){
	COOComplexMock* mock1=new COOComplexMock(1);
	cooref<COOComplexMock> test1(mock1);
	CPPUNIT_ASSERT(test1.getNb_ref(mock1)==1);
	cooref<COOComplexMock> test2(mock1);
	CPPUNIT_ASSERT(test1.getNb_ref(mock1)==2);
}

void coorefTest::dec_refTest(){
	COOComplexMock* mock1=new COOComplexMock(1);
	cooref<COOComplexMock>* test1=new cooref<COOComplexMock>(mock1);
	cooref<COOComplexMock>* test2= new cooref<COOComplexMock>(mock1);
	delete test2;
	CPPUNIT_ASSERT(test1->getNb_ref(mock1)==1);
	delete test1;
}


void coorefTest::testOperatorAffect(){
	COOComplexMock* mock1=new COOComplexMock(1);
	COOComplexMock* mock2=new COOComplexMock(2);
	cooref<COOComplexMock> test1(mock1);
	cooref<COOComplexMock> test2(mock2);

	test2=test1;
	CPPUNIT_ASSERT(test2->getVal()==test1->getVal());
}

void coorefTest::testOperatorAdd(){
	COOComplexMock* mock1=new COOComplexMock(1);
	COOComplexMock* mock2=new COOComplexMock(2);
	cooref<COOComplexMock> test1(mock1);
	cooref<COOComplexMock> test2(mock2);
	test1=test1+test2;
	CPPUNIT_ASSERT(test1->getVal()==12);

}
void coorefTest::testOperatorSub(){
	COOComplexMock* mock1=new COOComplexMock(1);
	COOComplexMock* mock2=new COOComplexMock(2);
	cooref<COOComplexMock> test1(mock1);
	cooref<COOComplexMock> test2(mock2);
	test1=test1-test2;
	CPPUNIT_ASSERT(test1->getVal()==13);
}


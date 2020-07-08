/*
 * coorefTest.hpp
 *
 *  Created on: 13 janv. 2020
 *      Author: rouil
 */

#ifndef TEST_COOREFTEST_HPP_
#define TEST_COOREFTEST_HPP_

#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCaller.h>
#include "../header/cooref.hpp"
#include "COOComplexMock.cpp"

class coorefTest: public CppUnit::TestCase{


public:

	void setUp();
	void tearDown();

	void inc_refTest();
	void dec_refTest();

	void testOperatorAffect();
	void testOperatorAdd();
	void testOperatorSub();

	static CppUnit::Test *suite(){
		CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "coorefTest" );
		suiteOfTests->addTest(new CppUnit::TestCaller<coorefTest>("testinc_ref", &coorefTest::inc_refTest));
		suiteOfTests->addTest(new CppUnit::TestCaller<coorefTest>("testDec_ref", &coorefTest::dec_refTest));
		suiteOfTests->addTest(new CppUnit::TestCaller<coorefTest>("testOperatorAffect", &coorefTest::testOperatorAffect));
		suiteOfTests->addTest(new CppUnit::TestCaller<coorefTest>("testOperatorAdd", &coorefTest::testOperatorAdd));
		suiteOfTests->addTest(new CppUnit::TestCaller<coorefTest>("testOperatorSub", &coorefTest::testOperatorSub));
		return suiteOfTests;
	}

};

#endif /* TEST_COOREFTEST_HPP_ */

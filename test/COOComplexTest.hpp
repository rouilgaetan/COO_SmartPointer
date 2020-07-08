/*
 * test.hpp
 *
 *  Created on: 13 janv. 2020
 *      Author: rouil
 */

#ifndef TEST_COOCOMPLEXTEST_HPP_
#define TEST_COOCOMPLEXTEST_HPP_

#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCaller.h>
#include "../header/COOComplex.hpp"


class COOComplexTest : public CppUnit::TestCase{

	COOComplex* test1;
	COOComplex* test2;

public:

	void setUp();

	void tearDown();

	void testConstructor();

	void testOperatorAffect();

	void testOperatorAdd();

	void testOperatorSub();


	static CppUnit::Test *suite(){
		CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "COOComplexTest" );
		suiteOfTests->addTest(new CppUnit::TestCaller<COOComplexTest>("testConstructor", &COOComplexTest::testConstructor));
		suiteOfTests->addTest(new CppUnit::TestCaller<COOComplexTest>("testOperatorAffect", &COOComplexTest::testOperatorAffect));
		suiteOfTests->addTest(new CppUnit::TestCaller<COOComplexTest>("testOperatorAdd", &COOComplexTest::testOperatorAdd));
		suiteOfTests->addTest(new CppUnit::TestCaller<COOComplexTest>("testOperatorSub", &COOComplexTest::testOperatorSub));
	    return suiteOfTests;
	}
};




#endif /* TEST_COOCOMPLEXTEST_HPP_ */

/*
 * COOStringTest.hpp
 *
 *  Created on: 13 janv. 2020
 *      Author: rouil
 */

#ifndef TEST_COOSTRINGTEST_HPP_
#define TEST_COOSTRINGTEST_HPP_

#include <cppunit/extensions/HelperMacros.h>
#include "../header/COOString.hpp"

class COOStringTest : public CppUnit::TestCase{

	COOString* test;

public:
	void setUp();
	void tearDown();

	void testConstructor();

	static CppUnit::Test *suite(){
		CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "COOStringTest" );
		suiteOfTests->addTest(new CppUnit::TestCaller<COOStringTest>("testConstructor", &COOStringTest::testConstructor));
	    return suiteOfTests;
	}
};

#endif /* TEST_COOSTRINGTEST_HPP_ */

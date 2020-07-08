/*
 * COOObjectTest.hpp
 *
 *  Created on: 13 janv. 2020
 *      Author: rouil
 */

#ifndef TEST_COOOBJECTTEST_HPP_
#define TEST_COOOBJECTTEST_HPP_

#include <cppunit/extensions/HelperMacros.h>
#include "../header/COOObject.hpp"

class COOObjectTest:public CppUnit::TestFixture{

	COOObject* test;

public :
	void setUp();
	void tearDown();

	void hashCodeTestPersist();

	void hashCodeTestUnic();

	static CppUnit::Test *suite(){
			CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "COOObjectTest" );
			suiteOfTests->addTest(new CppUnit::TestCaller<COOObjectTest>("hashCodeTestPersist", &COOObjectTest::hashCodeTestPersist));
			suiteOfTests->addTest(new CppUnit::TestCaller<COOObjectTest>("hashCodeTestUnic", &COOObjectTest::hashCodeTestUnic));
		    return suiteOfTests;
		}

};


#endif /* TEST_COOOBJECTTEST_HPP_ */

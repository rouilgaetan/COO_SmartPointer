/*
 * main.cpp
 *
 *  Created on: 7 janv. 2020
 *      Author: rouil
 */
#include "./header/COOObject.hpp"
#include "./header/COOComplex.hpp"
#include "header/cooref.hpp"
#include "header/COOString.hpp"
#include "test/COOComplexTest.hpp"
#include "test/COOStringTest.hpp"
#include "test/COOObjectTest.hpp"
#include "test/coorefTest.hpp"
#include <cppunit/ui/text/TestRunner.h>



/**
 * @brief handles the display of reference.
 * @param out the out stream use by <<
 * @param ref the object to display
 * @return
 */
template<typename T> std::ostream& operator<<(std::ostream& out, const cooref<T> ref){
	return ref.write(out);
}

using namespace std;

int main(){

	// Adds the test to the list of test to run
	CppUnit::TextUi::TestRunner runner;

	runner.addTest(COOObjectTest::suite());
	runner.addTest(COOStringTest::suite());
	runner.addTest(COOComplexTest::suite());
	runner.addTest(coorefTest::suite());

	runner.run();


	cooref<COOComplex> un(new COOComplex(1));
	cout<<"Calcul :"<<un<<" + "<<un<<"="<<endl;
	cooref<COOComplex> deux = un + un;
	deux->affiche();
	cout<<"Resultat: "<<deux<<endl;
	cooref<COOComplex> zero(un-un);
	cout<<"Resultat: "<<zero<<endl;

	cooref<COOString> bonjour(new COOString("Bonjour"));
	cooref<COOString> monde(new COOString(" Monde"));
	cooref<COOString> bonjourmonde = bonjour+monde;
	cout<<bonjourmonde<<endl;
	//cooref<COOString> erreur= bonjour-monde;
	return 0;
}


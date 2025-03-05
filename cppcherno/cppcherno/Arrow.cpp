#include "Arrow.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Arrow::Arrow(int a, int b) 
	: regVar(a) , constVar(b)
{
}

void Arrow::print(){
	cout << "regular var is: " << regVar << "const variable is " << constVar << endl;
}
//Arrow::~Arrow() { //no deconstructor overloading and no params allowed
//	cout << "i am the deconstructor" << endl; //gets called after program is done running
//}

//void Arrow::printShiz() {
//	cout << "regular nigga"<<endl;
//}
//
//void Arrow::printShiz2() const {
//	cout << "kys nigga" << endl;
//}
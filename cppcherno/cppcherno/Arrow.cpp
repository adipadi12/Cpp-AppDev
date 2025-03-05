#include "Arrow.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Arrow::Arrow() {
	cout << "i am the constructor" << endl;
}

Arrow::~Arrow() { //no deconstructor overloading and no params allowed
	cout << "i am the deconstructor" << endl; //gets called after program is done running
}

void Arrow::printShiz() {
	cout << "regular nigga"<<endl;
}

void Arrow::printShiz2() const {
	cout << "kys nigga" << endl;
}
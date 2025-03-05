#include "Adi.h"
#include <iostream>
//header and cpp files separated in general because in a team header files 
// are used by other programmers and cpp files have pre-defined functions written by you that other programmers can use 
using namespace std;

Adi::Adi() {   //:: is binary scope resolution. means it is a member of the class
	cout << "batman" << endl;
}
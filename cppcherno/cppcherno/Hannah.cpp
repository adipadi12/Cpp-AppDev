#include <iostream>
#include "Hannah.h"
using namespace std;

Hannah::Hannah() 
{

}

Hannah::Hannah(int a) {
	num = a;
}

Hannah Hannah::operator+(Hannah aso){
	Hannah brandNew;
	brandNew.num = num + aso.num;
	return(brandNew);
}
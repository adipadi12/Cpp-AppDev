#include <iostream> //pre-processor directive. including a file in program we gon be using later on
#include "Adi.h"
#include <ctime> 
#include <cstdlib>
using namespace std;

int main() {
	
	srand(time(0)); //this is the seed for a random number generator. time calculates the time since 1970 using the clock
	//hence this gives the illusion that the number generated is truly random
	for (int i = 1; i < 25; i++)
	{
		cout << 1 + (rand() % 6) << endl;
	}
}


//void printLol(); //function prototype. allows code to be compiled even when function is called before declaration
//
//void printShit(int x) { //function parameters
//	cout << x;
//}
//
//int addNumbers(int x, int y) {
//	return (x + y);
//}
//
//class AdisClass {
//	public:
//		AdisClass(string z) { //constructor creation
//			//cout << "this printed automatically" << endl;
//			setName(z);
//		}
//		void setName(string x) {
//			name = x; //setter method. made to access a private thing inside the class
//
//		}
//		string getName() {
//			return name;
//		}
//	private: //anything put after this can be used outside of this class. caled an access specifier
//		/*void coolShit() {
//			cout << "failing tomorrow" << endl;
//		}*/
//		string name;
//
//};

//int main() {
//	//printShit(69);
//	//cout << addNumbers(8, 10);
//
//	AdisClass adipadi("lucky adi"); //named my class adipadi just like a variable
//	cout << adipadi.getName();
//
//	AdisClass pihupillu("pillu potty");
//	cout << pihupillu.getName();
//	//adipadi.coolShit(); //using a dot . we can access the functions in that class
//
//	adipadi.setName("poopy");
//	cout << adipadi.getName();
//	
//	return 0;
//}


void printLol() {
	cout << "NIGGGAAAAAAAAAAAA" << endl;
}
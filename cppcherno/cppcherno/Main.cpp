#include <iostream> //pre-processor directive. including a file in program we gon be using later on
#include "Adi.h"
#include <ctime> 
#include <cstdlib>
#include "Arrow.h"
#include "Birthday.h"
#include "People.h"
#include <fstream>
using namespace std;

class StinkFist {
public:
	StinkFist() { stinkyVar = 0; }
private:
	int stinkyVar;

	friend void stinkysFriend(StinkFist& sfo);
};

void stinkysFriend(StinkFist& sfo) {
	sfo.stinkyVar = 99;
	cout << sfo.stinkyVar << endl;
}

int main() {
	StinkFist bob;
	stinkysFriend(bob);
	ofstream file;
	file.open("poop.txt");

	file << "I love Shreya Gupta \n";
	file.close();
}

//int main() {
//	Arrow arrowObject;
//	Arrow *arrowPointer = &arrowObject;
//	arrowObject.printCrap();
//
//	arrowObject.printCrap(); //when using object use .
//	arrowPointer->printCrap(); //when using a pointer use arrow
//}
//
//void passByValue(int x) {
//	x = 99;
//}
//
//void passByReference(int *x) {
//	*x = 66;
//}
//void printArray(int theArray[], int sizeOfArray) {
//	for (int x = 0; x < sizeOfArray; x++)
//	{
//		cout << theArray[x] << endl;
//	}
//}

//void printNumber(int x) {
//	cout << "priniting int " << x << endl;
//}
//
//void printNumber(float x) {
//	cout << "print a float " << x << endl;
//}
//int main() {
//	int a = 54;
//	float b = 32.57;
//
//	printNumber(a);
//	printNumber(b);
//}
//int tuna = 69;
//int main() {
//	double tuna = 20;
//	cout << ::tuna; //unary operator used to call the global variable outside of the one defined in the function


//int volume(int l = 1, int w = 1, int h = 1);
//int main() {
//	
//	srand(time(0)); //this is the seed for a random number generator. time calculates the time since 1970 using the clock
//	//hence this gives the illusion that the number generated is truly random
//	cout << volume(5, 6);
//}
//int volume(int l, int w, int h) {
//	return l * w * h;
//}

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
#include <iostream> //pre-processor directive. including a file in program we gon be using later on
#include "Adi.h"
#include <ctime> 
#include <cstdlib>
using namespace std;

int factorial(int x) {
	if (x == 1)
	{
		return 1;
	}
	else {
		return x * factorial(x - 1);
	}
}

int main() {
	int tuna[5] = { 3,6,4,5,45 };
	int sum = 0;

	for (int x = 0; x < 5; x++)
	{
		sum += tuna[x];
		cout << sum << endl;
	}
	
}


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
#include <iostream> //pre-processor directive. including a file in program we gon be using later on
#include "Adi.h"

using namespace std;

int main() {
	Adi adi;
	int age;
	int totalNoAges = 0;
	int totalAge = 0;

	cout << "enter first persons age or -1 to quit" << endl;
	cin >> age;
	while (age != -1) {
		
		totalAge += age;
		totalNoAges++;

		cout << "Enter age of next persons or -1 to quit: " << endl;
		cin >> age;
	}
	cout << "no of people are " << totalNoAges;
	cout << "Average age is " << totalAge / totalNoAges;
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
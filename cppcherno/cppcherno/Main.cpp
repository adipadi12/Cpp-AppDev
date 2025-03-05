#include <iostream> //pre-processor directive. including a file in program we gon be using later on
using namespace std;

void printLol(); //function prototype. allows code to be compiled even when function is called before declaration

void printShit(int x) { //function parameters
	cout << x;
}

int addNumbers(int x, int y) {
	return (x + y);
}

class AdisClass {
	public: //anything put after this can be used outside of this class. caled an access specifier
		void coolShit() {
			cout << "failing tomorrow" << endl;
		}

};

int main() {
	//printShit(69);
	//cout << addNumbers(8, 10);
	AdisClass adipadi; //named my class adipadi just like a variable
	adipadi.coolShit();
	return 0;
}

void printLol() {
	cout << "NIGGGAAAAAAAAAAAA" << endl;
}
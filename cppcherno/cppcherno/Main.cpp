#include <iostream> //pre-processor directive. including a file in program we gon be using later on
using namespace std;

void printLol(); //function prototype. allows code to be compiled even when function is called before declaration

void printShit(int x) { //function parameters
	cout << x;
}

int addNumbers(int x, int y) {
	return (x + y);
}

int main() {
	//printShit(69);
	cout << addNumbers(8, 10);
	return 0;
}

void printLol() {
	cout << "NIGGGAAAAAAAAAAAA" << endl;
}
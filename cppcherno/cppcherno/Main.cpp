#include <iostream> //pre-processor directive. including a file in program we gon be using later on
using namespace std;

void printLol(); //function prototype. allows code to be compiled even when function is called before declaration

int main() {
	//cout << "Hello \n World \n bacon"; //statement. ends with semicolon
	//order of precedence
	int x = 75;

	cout << x % 10 <<endl;
	printLol();
}

void printLol() {
	cout << "NIGGGAAAAAAAAAAAA";
}
#include <iostream> //pre-processor directive. including a file in program we gon be using later on
using namespace std;

void printLol(); //function prototype. allows code to be compiled even when function is called before declaration

int main() {
	//cout << "Hello \n World \n bacon"; //statement. ends with semicolon
	//order of precedence
	int x = 75;

	printLol();

	cout << x % 10 << endl;
	char c[] = "GATE2011";
	char* p = c;

	printf("%s", p + p[3] - p[1]);
}

void printLol() {
	cout << "NIGGGAAAAAAAAAAAA" << endl;
}
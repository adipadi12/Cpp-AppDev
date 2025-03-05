#include <iostream> //pre-processor directive. including a file in program we gon be using later on
using namespace std;

void printLol(); //function prototype. allows code to be compiled even when function is called before declaration

void f1(int a, int b) {
	int c;
	c = a; a = b; b = c;
}
void f2(int* a, int* b) {
	int c;
	c = *a; *a = *b; *b = c;
}
int main() {
	int a = 4, b = 5, c = 6;
	f1(a, b);
	f2(&b, &c);
	printf("%d", c - a - b);
	return 0;
}

void printLol() {
	cout << "NIGGGAAAAAAAAAAAA" << endl;
}
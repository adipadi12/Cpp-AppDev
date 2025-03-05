#include <iostream> //pre-processor directive. including a file in program we gon be using later on
using namespace std;

void printLol(); //function prototype. allows code to be compiled even when function is called before declaration

#include <stdio.h>
void f(int* p, int* q) {
	p = q;
	*p = 2;
}
int i = 0, j = 1;
int main() {
	f(&i, &j);
	printf("%d %d\n", i, j);
	return 0;
}


void printLol() {
	cout << "NIGGGAAAAAAAAAAAA" << endl;
}
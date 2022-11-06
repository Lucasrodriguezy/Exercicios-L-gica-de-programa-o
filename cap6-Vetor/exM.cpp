//  elaborar um programa que execute a tabuada e armazene os elementos numa matriz A com 10 elementos
#include <iostream>
using namespace :: std;
int main () {
	int A[11], x,i;
	cout << "Enter a number: ";
	cin >> x;

	for (i=0; i<11; ++i){
		A[i] = x*i;
	}

	for (i=0; i<11; ++i){
		cout << A[i] << "	";
	}
}

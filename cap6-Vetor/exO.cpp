//Ler 25 elementos em uma matriz A em graus celsius e apresentar a conversao dos 25 elementos em uma matriz B.
#include <iostream>
using namespace :: std;
int main(){
	int A[25],B[25],i;

	for (i=0; i<25; ++i){
		cout << "Digite um numero em graus celsius: \n";
		cin >> A[i];
		B[i] = ((A[i] * 9/5) + 32);
	}

	for (i=0; i<25; ++i){
			cout << "\n" <<  A[i] << "C	" << B[i] << "F";
	}
}



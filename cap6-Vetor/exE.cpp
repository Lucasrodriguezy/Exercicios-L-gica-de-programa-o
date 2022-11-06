//ler uma matriz A com 15 elementos, construir uma matriz B de forma que todo elemento de A seja uma fatorial contida em B. 
//apresentar A e B. (IMCOMPLETO)
#include<iostream>
using namespace :: std;
int main (){
	int A[15],B[15];

	for (int i=0; i<15; ++i){
		cout << "\nDigite os elementos de A: ";
		cin >> A[i];
	}

	for(int i=0; i<15;++i){
		for(int i = 1;i<=A[i]; i++){
                        B[i]= A[i]*i;
                }
	}

	for(int i=0; i<15; ++i){
		cout << A[i] << "	" << B[i] << "\n";
	}
}


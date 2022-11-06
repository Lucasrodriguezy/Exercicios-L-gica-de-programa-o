//ler A e B, cada numero par da matriz A deve ser atribuido a um elemento impar da matriz B(trocar os pares pelo impares) e apresentar os dois no final.
//B deve ser tudo par

#include <iostream> 
using namespace :: std;
int main(){
	int A[6]= {2,3,5,6,7,9},B[6]={5,2,3,3,5,7},i,restA,restB,X[6];

	for (i=0; i<6;++i){
		restA = A[i]%2;
		restB = B[i]%2;
		if (restA == 0 && restB != 0){
			X[i] = B[i];
			B[i] = A[i];
			A[i] = X[i];
		}
	}

	for (i=0;i<6; ++i){
		cout << "A: " << A[i]<< "	B:" << B[i] << "\n";
	}
}

			
			
			



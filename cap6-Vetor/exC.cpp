//Ler duas matrizes A e B, e atribuir a subtração dos dois na matriz C

#include<iostream>
using namespace :: std;
int main (){
	int A[20];
	int B[20];
	int C[20];

	// Ler a matriz A;
	for (int n = 0; n < 20; ++n){
		cout << "digite o elemento da matriz A: ";
		cin >> A[n];
		cout << "\nDigite agora o elemento da matriz B: ";
		cin >> B[n];
	}

	// subtrair A por B, atribuindo à matriz C
	for (int n=0;n<20; ++n){
		C[n] = A[n] - B[n];
	}
	
	for(int n=0; n<20; ++n){
		cout << C[n] << "	";
	}
}

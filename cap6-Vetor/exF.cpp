//ler duas matrizes A e B com 15 elementos cada, e atribuir todos os elementos para C, com 30 elementos
#include <iostream>
using namespace :: std;
int main (){
	int A[15], B[15],C[30],i,k=15;

	for (i=0;i<15;++i){
		cout << "Digite A: \n";
		cin >> A[i];
		C[i] = A[i];	
	}

	for( i=0;i<15;++i){
		cout << "Digite B: \n";
		cin >> B[i];
		C[k] = B[i];
		k++;
	}

	for( i =0; i<30; ++i){
		cout << C[i] << "	";
	}

}

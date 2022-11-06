//Ler duas matrizes A e B, A com 20 e elementos e B com 30, em seguida construir uma matriz C com 50 elementos unindo A e B;
#include <iostream>
using namespace :: std;
int main(){
	int A[20], B[30], C[50],i, k=20;
	for (i = 0; i < 20; ++i){
		cout << " Digite A: \n";
		cin >> A[i];
		C[i] = A[i];
	}

	for (i = 0; i < 30; ++i){
		cout << "Digite B: \n";
		cin >> B[i];
		C[k] = B[i];
	        ++k;
	}

	for (i = 0; i < 50; ++i){
		cout << C[i] << "	";
	}
}


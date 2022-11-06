// ler tres matrizes A,B,C cada uma com 5 elementos, em seguida construir uma matriz D com todos os outros elementos, totalizando 15;
#include <iostream> 
using namespace :: std;
int main (){
	int A[5],B[5],C[5],D[15],i,k;

	for (i = 0; i < 5; ++i){
		cout << "Digite A: ";
		cin >> A[i];
		cout << "Digite B: ";
                cin >> B[i];
		cout << "Digite C: ";
                cin >> C[i];
		D[i] = A[i];
	}

	k = 5;
	for (i = 0; i<5;++i){
		D[k] = B[i];
		k++;
	}
	
	for (i = 0; i<5;++i){
		D[k] = C[i];
		k++;
	}

	for (i=0;i<15;++i){
		cout << D[i] << "	";
	}
}


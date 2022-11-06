//ler A,B e C com 15 elementos cada e construir uma matriz D que será a soma do cubo das matrizes ABC. Apresentar em ordem crescente;
#include <iostream>
using namespace :: std;
int main(){
	int A[15],B[15],C[15],D[15],i,x,j;

	for(i=0;i<15;++i){
		cin >> A[i];
	}
	for(i=0;i<15;++i){
		cin >> B[i];
	}
	for(i=0;i<15;++i){
		cin >> C[i];
	}
	for(i=0;i<15;++i){
		D[i] = (A[i] + B[i] + C[i]) * (A[i] + B[i] + C[i]) * (A[i] + B[i] + C[i]);
	}
	for(i=0;i<14;++i){
		for(j=i+1;j<15;++j){
			if(D[i] > D[j]){
				x = D[i];
				D[i] = D[j];
				D[j] = x;
			}
		}
	}
	for(i=0;i<15;++i){
		cout << D[i] << endl;
	}
}

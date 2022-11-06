// ler matrizes ABC com 15 elementos cada, construir uma matriz D com a soma de cada elemento, e depois montar uma rotina binaria para pesquisar elementos na matriz D.
#include <iostream>
using namespace :: std;
int main(){
	int A[5],B[5],C[5],D[5],i,j,x;
	for(i=0;i<5;++i){
		cin >> A[i];
	}
	for(i=0;i<5;++i){
		cin >> B[i];
	}
	for(i=0;i<5;++i){
		cin >> C[i];
	}
	for(i=0;i<5;++i){
		D[i] = A[i] + B[i] + C[i];
	}
	for(i=0;i<4;++i){
		for(j=i+1;j<5;++j){
			if(D[i] > D[j]){
				x = D[i];
				D[i] = D[j];
				D[j] = x;
			}
		}
	}
	for(i=0;i<5;++i){
		cout << D[i] << endl;
	}
}


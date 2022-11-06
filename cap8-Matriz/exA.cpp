//ler duas matrizes A e B cada uma com 5 linhas e 3 colunas. A matriz C será a soma da matriz A com B, apresentar C.

#include <iostream>
using namespace :: std;
int main(){
	int A[3][5], B[3][5], C[3][5], i, j;

	cout << "Digite A: " ;
	for (i=0;i<3;++i){
		for(j=0;j<5;++j){
			cin >> A[i][j];
		}
	}
	cout << "Digite B: ";
	for(i=0;i<3;++i){
		for(j=0;j<5;j++){
			cin >> B[i][j];
		}
	}

	for(i=0;i<3;++i){
		for(j=0;j<5;++j){
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	for(i=0;i<3;++i){
		for(j=0;j<5;++j){
			cout << C[i][j] <<  "	" ;
		}
	}
}	


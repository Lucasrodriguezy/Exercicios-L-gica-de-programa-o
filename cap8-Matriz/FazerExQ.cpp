// ler 20 valores inteiros em uma matriz A 4x5 4 linhas e 5 colunas, construir a matriz B com 4 elementos que seja formada pelo somatorio dos elementos de cada linha da matriz A, construir uma matriz C de uma dimensao corresponte pelo somatorio de cada coluna da matriz A.
// ao final o programa deverá apresentar o total do somatorio dos eleemtnos da matriz B com o somatorio dos elementos de C;
#include <iostream>
using namespace :: std;
int main(){
	int A[4][5],B[4],C[5],i,j,S;

	for(i=0;i<4;++i){
		for(j=0;j<5;++j){
			cin >> A[i][j];
		}
	}

	for(i=0;i<4;++i){
		B[i] = 0;
		for(j=1;j<5;++j){
			for(int n=1;n=A[i][j];++n){
			B[i] = B[i] + A[i][j];
			}
		}


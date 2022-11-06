// ler uma matriz A 8x6, construir uma matriz B de UMA dimensão que seja formada pela soma de cada linha da matriz A. ao final apresentar o somatorio dos elementos da matriz B;
#include <iostream>
using namespace :: std;
int main(){
	int A[8][6],B[8],i,j,aux;

	for(i=0;i<8;++i){
		for(j=0;j<6;++j){
			cin >> A[i][j];
		}
	}
	int s=0;	
	for(i=0;i<8;++i){
		B[i] = 0;
		for(j=1;j<6;++j){
		B[i] = B[i]+A[i][j];
	
		
		}
		s += s + B[i];
	}
               		
	
		cout << s;


		
	}


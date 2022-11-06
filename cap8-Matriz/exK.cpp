// ler uma matriz A com 4 linhas e 4 colunas e apresentar o somatorio dos elementos situados na posição diagonal 1,1 2,2 3,3 4,4 da matriz
#include <iostream>
using namespace :: std;
int main(){
	int A[4][4],i,j,n;

	for(i=0;i<4;++i){
		for(j=0;j<4;++j){
			cin >> A[i][j];
		}
	}
	int sum = 0;
	for(i=0;i<4;++i){
                for(j=0;j<4;++j){
			if(i == j){
				int aux = A[i][j];
				A[i][j] = 0;
				for(n=1;n<aux;++n){
					A[i][j] = A[i][j] + n;
				
				}
				
			}

		}

	}

	for(i=0;i<4;++i){
                for(j=0;j<4;++j){
			cout << "[" << i << "][" << j << "]= " << A[i][j] << endl;
		}
	}
}
					


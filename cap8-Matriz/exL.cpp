//ler uma matriz com 15 linhas e 15 colunas, apresentar o somatorio dos elementos na diagonal.
#include <iostream>
using namespace :: std;
int main(){
	int A[15][15],i,j,n,aux;

	for(i=0;i<15;++i){
		for(j=0;j<15;++j){
			cin >> A[i][j];
		}
	}

	for(i=0;i<15;++i){
                for(j=0;j<15;++j){
			if(i==j){
				aux = A[i][j];
				A[i][j] = 0;
				for(n=0;n<aux;++n){
					A[i][j] += n;
				}
			}
		}
	}

	for(i=0;i<15;++i){
                for(j=0;j<15;++j){
			cout << "[" << i << "][" << j << "]= " << A[i][j] << endl;
		}
	}
}



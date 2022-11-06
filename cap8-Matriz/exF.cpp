//ler uma matriz com 5 linhas e 4 colunas, construir uma matriz B com a fatorial de cada elemente de A. Apresentar a matriz A e B.
#include <iostream>
using namespace :: std;
int main(){
	int A[5][4],B[5][4],i,j,n;

	for(i=0;i<5;++i){
		for(j=0;j<4;++j){
			cout << "digite A:\n";
			cin >> A[i][j];
			}
	}

	for(i=0;i<5;++i){
                for(j=0;j<4;++j){
                        int factorial = 1;
                  	for( n = 1; n<=A[i][j]; n++){
                        factorial *= n;
                        B[i][j] = factorial;

                        }
        }
}

	for(i=0;i<5;++i){
                for(j=0;j<4;++j){
                        cout << "A[" << i << "][" << j << "] = " << A[i][j];
			cout << "		" << "B[" << i << "][" << j << "] = " << B[i][j] << endl;
                        }
        }
}
	

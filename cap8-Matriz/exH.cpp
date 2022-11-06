//ler uma matriz A com 5linhas e 5 colunas, construir matriz B com mesma dimensão, porém com o dobro dos elementos de A, Com excessão das posiçoes B[1][1] [2][2],[3][3],[4][4],[5][5]. Apresentar matriz B.
#include <iostream>
using namespace :: std;
int main(){
	int A[5][5],B[5][5],i,j;

	for(i=0;i<5;++i){
		for(j=0;j<5;++j){
			cin >> A[i][j];
		}
	}

	for(i=0;i<5;++i){
                for(j=0;j<5;++j){
			if(i != j){
                        B[i][j] = A[i][j]*2;
                }else{
		 	B[i][j] = A[i][j];	
       		 }
	}
}	

	for(i=0;i<5;++i){
                for(j=0;j<5;++j){
                        cout << "B[" << i << "][" << j << "] = " << B[i][j] << endl;

                }       
        }
}

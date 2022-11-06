// ler uma matriz A com 7 linhas e 7 colunas, construir uma matriz B com mesma dimensao, cada elemento da matriz B deverá ser o somatorio dos elementos de A, com excessao dos impares (B[1,1], B[3,3], B[5,5] .... Apresentar B. (IMCOMPLETO)

#include <iostream>
using namespace :: std;
int main(){
	int A[7][7], B[7][7],i,j,sum=0,fat=1,aux=1;

	for(i=0;i<7;++i){
		for(j=0;j<7;++j){
			cin >> A[i][j];
		}
	}
	int resti ;
	int restj ;  
	for(i=0;i<7;++i){
		for(j=0;j<7;++j){
			if(i == j){
				resti = i%2;
				restj = j%2;
				if(resti == 1 && restj == 1){
					B[i][j] = 1;
				for(aux=1;aux<A[i][j];++aux){
					B[i][j] *= aux;
				
				}
				}else{
					B[i][j] = 0;
				for(aux=1;aux<A[i][j];++aux){
					B[i][j] += aux;
				
					}
				}
		}else{
			B[i][j] = 0;
			for(aux=1;aux<A[i][j];++aux){
				B[i][j] = B[i][j] + aux;

	}
		}
		}
	}

	for(i=0;i<7;++i){
                for(j=0;j<7;++j){
			cout << "B[ " << i << "]" << "[" << j << "] = " << B[i][j] << endl;
		}
	}
}

			
			


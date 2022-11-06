// Ler matriz A, a primeira coluna da matriz C será os elementos de A mais 5, a segunda será a fatorial de cada elemento e a terceira será o quadrado dos elementos de A.
#include <iostream>
using namespace :: std;
int main(){
	int A[10], C[10][3],i,j;

	for( i=0;i<10;++i){
		cin >> A[i];
	}

	for( i=0;i<10;++i){
			C[i][0] = A[i] + 5;
	}

	for(i=0;i<10;++i){
		int factorial = 1;
		 for( j = 1; j<=A[i]; j++){
                        factorial *= j;
			C[i][1] = factorial; 
                }
	}
	
	for(i=0;i<10;++i){
		C[i][2] = A[i]*A[i];
	}

	for( i=0;i<10;++i){
		for(j=0;j<3;++j){
		       cout << "test[" << i << "][" << j << "] = " << C[i][j] << endl;	
}
}
}

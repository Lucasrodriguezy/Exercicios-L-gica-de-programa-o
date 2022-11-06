//Ler 20 elementos na matriz A e 30 na matriz B, na matriz C deverá conter a junção de todos elementos. totalizando 50 elementos.

#include <iostream>
using namespace :: std;
int main() {
	int A[2],B[3],C[5],x,i,n=2,j;

	cout << "Digite A: \n";
	for(i=0;i<2;++i){
		cin >> A[i];	       

	}

	

	cout << "Digite B: \n";
	for(i=0;i<3;++i){
		cin >> B[i];
		

}
	for(i=0;i<5;++i){
		if(i<=2){
			C[i] = A[i];
		}else{
			C[i] = B[i];
		}
	}

	for(i=0;i<4;++i){
		for(i=0;i<5;++i){
			if(C[j] > C[i]){
				C[j] = x;
				C[i] = C[j];
				C[i] = x;
			}
		}
	}
	
	cout << " Os valores decrescentes de C são: \n";
	for (i=0;i<5;++i){
		cout << C[i] << endl;
	}

}




	

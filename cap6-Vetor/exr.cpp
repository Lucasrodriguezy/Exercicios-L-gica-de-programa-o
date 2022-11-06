//Ler 6 valores de A e B, a matriz C deverá conter todos os elementos impar dos vetores A e B, e a matriz D deverá conter todos os elementos pares de A e B.
#include <iostream>
using namespace :: std;
int main (){
	int A[6],B[6],C[12],D[12],i,rest,restB;

	for (i=0;i<6;++i){
		cout << "Digite os valores de A:";
		cin >> A[i];
		cout << "Digite os valores de B: ";
		cin >> B[i];
	}

	for (i=0;i<12;++i){
		rest = A[i]%2;
		restB = B[i]%2;
		if(rest != 0){
			C[i] = A[i];
		}else{ 
			D[i] = A[i];
		}
		if(restB == 0){
			D[i] = B[i];
		}else{
			C[i] = B[i];
		}
	}

	for (i=0;i<12;++i){
		cout << "os valores de C são impares: ";
		cout << C[i] << "	" << "\n";
	}

	for (i=0;i<12;++i){
		cout << "Os valores de D são pares: ";
		cout << D[i] << "	" << "\n";
	}
}

		


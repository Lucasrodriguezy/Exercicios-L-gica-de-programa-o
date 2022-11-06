//ler duas matrizes A e B com dimensão de 6 elementos, a matriz A deverá aceitar apenas elementos pares, enquanto a matriz B deverá aceitar apenas elementos impares, no final apresentar C que vai ser a junção de A e B;(imcompleto)
#include <iostream>
using namespace :: std;
int main () {
	int A[6],B[6],C[12],Xa[6],Xb[6],rest,i;
	for (i=0;i<6;++i){
		cout << "Digite A (apenas numeros pares): ";
		cin >> Xa[i];
		rest = Xa[i]%2;
		if (rest == 0){
			A[i] = Xa[i];
		}

	}
	for (i=0;i<6;++i){
                cout << "Digite B (apenas numeros impares): ";
                cin >> Xb[i];
                rest = Xb[i]%2;
                if (rest != 0){
                        B[i] = Xb[i];
                }
	}
	int k = 7;
	for(i=0;i<12;++i){
		C[i] = A[i];
		C[k] = B[i];
		k++;
	
	}

	for(i=0;i<12;++i){
		cout << "valores de C: " << C[i] << "	\n";

	}

}

		

// Ler uma matriz A com 12 elementos, coloca-los em ordem crescente. Ler uma matriz B com 12 elementos, coloca-los em ordem crescente. Somar tudo que tem em A e B na matriz C e coloca-los em ordem decrescente.
#include <iostream>
using namespace :: std;
int main(){
	int A[12],B[12],C[12],x,i,j;

	cout << "Digite os elementos de A: \n";
	for (i=0;i<12;++i){
		cin >> A[i];
	}
	
	cout << "Digite os elementos de B: \n";
	for (i=0;i<12;++i){
		cin >> B[i];
	}

	
	for (i=0;i<11;++i){
		for (j=i+1;j<12;++j){
			if (A[i] > A[j]){
				x = A[i];
				A[i] = A[j];
				A[j] = x;
			}
		}
	}

	
	for (i=0;i<11;++i){
		for(j=i+1;j<12;++j){
			if (B[i] > B[j]){
                                x = B[i];
                                B[i] = B[j];
                                B[j] = x;
                        }
	
		}

	}
	
	for (i=0;i<12;++i){
		C[i] = A[i] + B[i];
	}

	for (i=0;i<11;++i){
	for (j=i+1;j<12;++j){
		if(C[i] < C[j]){
			x = C[i];
			C[i] = C[j];
			C[j] = x;
	}

	}
}
	cout << "Os valores crescentes de A são: \n";
	for(i=0;i<12;++i){
		cout << A[i] << endl;
	}
	cout << "Os valores crescentes de B são: \n";
	for (i=0;i<12;++i){
		cout << B[i] << endl;
	}

	cout << "Os valores decrescente da soma de A e B são: \n";
	for(i=0;i<12;++i){
		cout << C[i] << endl;
	}
}

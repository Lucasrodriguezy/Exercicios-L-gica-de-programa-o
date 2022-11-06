//ler uma matriz A com 15 elementos, cada elemento da matriz B deverá ser metdade de A. Os elementos de A deverão estar em ordem crescente e B decrescente.
#include <iostream>
using namespace :: std;
int main(){
	int A[15],i,j,x;
	float B[5];

	cout << "Digite a matriz A:\n";
	for(i=0;i<15;++i){
		cin >> A[i];
		B[i] = A[i]/2;
	}

	for(i=0;i<14;++i){
		for(j=i+1;j<15;++j){
			if(A[j] > A[i]){
				x = A[i];
				A[i] = A[j];
				A[j] = x;
			}
		}
	}

	for(i=0;i<14;++i){
                for(j=i+1;j<15;++j){
                        if(B[i] > B[j]){
                                x = B[j];
                                B[j] = B[i];
                                B[i] = x;
                        }
                }
        }

	for(i=0;i<15;++i){
		cout << "matriz A:(decrescente) " << A[i] << endl;
		}
	for(i=0;i<15;++i){
                cout << "matriz B:(crescente) " << B[i] << endl;
                }



}

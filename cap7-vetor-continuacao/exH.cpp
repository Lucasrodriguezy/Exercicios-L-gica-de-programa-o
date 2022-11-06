//ler os valores da matriz A com 20 elementos negativos, os elementos da matriz B deverão estar positivos e em ordem decrescente.
#include <iostream>
using namespace :: std;
int main(){
	int A[20],B[20],x,i,j;

	cout << "Digite os valores negativos de A: \n";
	for(i=0;i<20;++i){
		cin >> A[i];
		B[i] = A[i] * (-1);
	}

	for(i=0;i<19;++i){
		for(j=i+1;j<20;++j){
			if(B[j] > B[i]){
				x = B[j];
				B[j] = B[i];
				B[i] = x;
			}
		}
	}

	cout << "Matriz B: " << endl;
	for(i=0;i<20;++i){
		cout << B[i] << endl;
	}
}


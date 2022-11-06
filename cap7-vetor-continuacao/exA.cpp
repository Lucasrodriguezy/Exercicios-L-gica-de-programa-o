// ler 12 valores em uma matriz A e coloca-los em ordem DECRESCENTE com os elementos em ordem ordenados
#include <iostream>
#include <string>
using namespace :: std;
int main() {
	string A[12],x;
	int i,j;

	cout << "Digite os valores da matriz A: \n";
	for (i=0;i<12;++i){
		cin >> A[i];
	}

	for (i=0;i<11;++i){
		for (j=i+1;j<12;++j){
			if (A[j] > A[i]){
			       x = A[i];
			       A[i] = A[j];
			       A[j] = x;
			}
		}
	}
	cout << "Os valores ordenados: \n";
	for (i=0;i<12;++i){
		cout << A[i] << endl;
	}
}
	
		    
		

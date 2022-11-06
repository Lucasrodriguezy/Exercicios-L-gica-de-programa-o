//Ler 20 elementos de A, e atribuir os mesmos elementos á B, porem em ordem inversa.
#include <iostream>
using namespace :: std;
int main (){
	int A[20],B[20],i,k=0;

	for (i = 0; i<20; ++i){
		cout << "Digite A: ";
		cin >> A[i];
	}

	for (i = 19; i>=0; --i){
		B[k] = A[i];
		k++;
	}

	for (i=0;i<20;i++){
		cout << B[i] << "	";
	}
}

	

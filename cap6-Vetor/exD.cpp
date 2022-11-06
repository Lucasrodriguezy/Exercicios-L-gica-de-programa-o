//Ler 15 elementos na matriz A, todo os elementos de B deverá ser o quadrado de todos elementos de A.
#include <iostream>
using namespace :: std;
int main (){
	int A[15], B[15];

	for(int i=0; i < 15; ++i){
		cin >> A[i];
	}

	for(int i=0; i< 15; ++i){
		B[i] = A[i] * A[i];
	}

	for (int i = 0; i< 15; ++ i){
		cout << A[i] << "	" << B[i] << "\n";
	}
}

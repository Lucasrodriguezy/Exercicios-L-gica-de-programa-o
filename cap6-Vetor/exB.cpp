//multiplicar variaveis entre si por 3. a variavel A terá 8 elementos, portanto multiplicar os 8 elementos da variavel A com os 8 da variavel B.
#include <iostream> 
using namespace :: std;
int main (){
	int A[8];
	int B[8];

	for (int n = 0; n<8; ++n){
		cin >> A[n];
	}

	for(int n = 0; n < 8; ++n){
		B[n] = A[n] * 3;
	}

	for(int n=0; n<8; ++n){
		cout << B[n] << "	";
	}
}

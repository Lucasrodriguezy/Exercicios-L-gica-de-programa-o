//ler 15 elementos reais para uma matriz A, construir uma matriz B com a seguinte observação todo elemento de A que for par deverá ser dividido por 2, caso contrario será multiplicado por 1.5.
#include <iostream> 
using namespace :: std;
int main (){
	int A[15], B[15], rest=0,i;

	for (i=0; i<4; ++i){
		cout << "Enter a number: ";
		cin >> A[i];
		}
	for (i=0; i<4; ++i){
		rest = A[i] % 2;
		if(rest == 0){
			B[i] = A[i]/2;
		}else{
			B[i] = A[i] * 1.5;
		}
	}
	cout << "Vector B total: ";

	for (i=0;i<4;++i){
		cout << "\n" << B[i];
	}
}
		   	

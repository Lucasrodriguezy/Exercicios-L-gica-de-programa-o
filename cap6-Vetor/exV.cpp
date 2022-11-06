//Ler uma matriz A com 30 elementos, no final apresentar a quantidade de numeros pares e impares na referida matriz.
#include <iostream> 
using namespace :: std;
int main (){
	int A[30], rest, i, par=0, impar=0;
	
	for (i=0; i<5; ++i){
		cout << "Enter a number: ";
		cin >> A[i];
	}

	for (i=0; i<5; ++i){
		rest = A[i]%2;
		if(rest == 0){
			++par;
		}else{
			++impar;
		}
	}
	
	cout << "O vetor A contem " << par <<" numeros pares e " << impar << " números impares.\n";

}

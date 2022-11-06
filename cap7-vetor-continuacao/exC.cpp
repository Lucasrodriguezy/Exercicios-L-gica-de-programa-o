// ler uma matriz com 15 elementos e construir uma matriz B do mesmo tipo mas com a fatorial dos numeros de A. Coloca-los em ordem crescente.
// (IMCOMPLETO)
#include <iostream>
using namespace :: std;
int main(){
	int A[5],B[5],x,i,j;
	long double factorial=1;

	cout << "Entre com os numeros \n";
	for (i=0;i<5;++i){
		cin >> A[i];
		if (A[i] < 0){
                cout << "Error! does not factorial of negative numbers ";
        }else{
                for(int j = 1; j<=A[i]; i++){
                        factorial *=i;

                }
		B[i] = factorial;
		cout << "Factorial  " << " = " << B[i];

             
        }

		
	}

	
}


//Ler 15 elementos na matriz A e apresentar o total de numeros pares na matriz.
#include <iostream>
using namespace :: std;
int main (){
	int A[5], rest, i, par=0, impar=0;

        for (i=0; i<5; ++i){
                cout << "Enter a number: ";
                cin >> A[i];
        }

        for (i=0; i<5; ++i){
                rest = A[i]%2;
                if(rest == 0){
                        ++par;
	       	}
	}

        cout << "O vetor A contem " << par <<" numeros pares.\n";

}


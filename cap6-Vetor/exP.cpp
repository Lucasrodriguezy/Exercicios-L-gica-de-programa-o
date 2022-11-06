//Ler 12 elementos para o vetor A, porem todo elemento impar deverá ser multiplicado por 2, se nao permanecer constante, atribuir tudo na variavel B.
#include <iostream>
using namespace :: std;
int main () {
	int A[12], B[12],i,rest=0;

	for (i=0;i<3;++i){
		cout << "Digite um número: \n";
		cin >> A[i];
	}

	for (i=0;i<3;++i){
		rest = A[i] % 2;
		if (rest != 0 ){
			B[i] = A[i] * 2;
			}else{
			B[i] = A[i];
	}
	}

        for (i=0;i<3;++i){
		cout <<"\n" <<  B[i] << "\n";
	}


}

// ler A e B com 10 elementos cada, e construir uma matriz C com a mesma quantidade de elementos sendo esta a soma do quadrado de A e B.
#include <iostream>
using namespace :: std;
int main (){
	int A[10],B[10],C[10],i;

	for (i=0;i<4;++i){
		cout << "Enter a number to vector A: ";
		cin >> A[i];
	}
	for (i=0;i<4;++i){
                cout << "Enter a number to vector B: ";
                cin >> B[i];
        }
	
	for (i=0;i<4;++i){
		C[i] = (A[i]+ B[i])*(A[i]+B[i]);
		cout << "The square of sum betwenn A and B: " << C[i] << "\n";
        } 
}	


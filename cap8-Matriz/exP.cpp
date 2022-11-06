// ler uma matriz A com 10 linhas e 7 colunas, ao final apresentar o total de elementos pares e impares, e o percentual de numeros impares e pares.
#include <iostream>
using namespace :: std;
int main(){
	int A[10][7],i,j,p,imp,rest;
	float totpar,totimp;

	for(i=0;i<10;++i){
		for(j=0;j<7;++j){
			cin >> A[i][j];
		}
	}
	
	 for(i=0;i<10;++i){
                for(j=0;j<7;++j){
			rest = A[i][j]%2;
			if(rest == 0){
				++p;
				totpar = p;
				totpar =totpar/70;
				totpar = totpar * 100;
			}else{
				++imp;
				totimp = imp;
				totimp = totimp/70;
				totimp = totimp * 100;
			}
		}
	 }

	 cout << "O numero de pares é " << p << endl;
	 cout << "O numero de impares é "<< imp << endl;
 	 cout << "O percentual de numeros pares é " << totpar<<"%" << endl << "O percentual de numeros impares é " << totimp << "%" << endl;
} 
			
		

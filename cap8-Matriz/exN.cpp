//ler uma matriz A de 7x7 ao final apresentar apenas os elementos pares
#include <iostream>
using namespace :: std;
int main(){
	int A[7][7],i,j;

	for(i=0;i<7;++i){
		for(j=0;j<7;++j){
			cin >> A[i][j];
		}
	}
	int rest;
	for(i=0;i<7;++i){
		for(j=0;j<7;++j){
			rest = A[i][j]%2;
			if(rest==0){
		        cout << "[" << i << "][" << j << "]= "<< A[i][j] << endl;
			}
		}
	}
}	
			

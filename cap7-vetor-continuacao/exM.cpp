//ler duas matrizes A e B com 12 elementos cada, construir uma C com o produto de A e B, e montar uma pesquisa sequencial para pesquisar os elementos de C;
#include <iostream>
#include <string>
using namespace :: std;
int main(){
	int A[12],B[12],C[12],i,x,j,pesq;
	bool acha;
	for(i=0;i<12;++i){
		cin >> A[i];
	}
	for(i=0;i<12;++i){
		cin >> B[i];
	}
	for(i=0;i<12;++i){
		C[i] = A[i] * B[i];
	}

	string resp = "s";
	
	while(resp == "s"){
		cout << "Digite o nome a ser pesquisado" << endl;
		cin >> pesq;
		i=1;
		acha = false;
		while(i<=12 && acha == false){
			if(pesq == C[i]){
				acha = true;
			}else{
				i = i+1;
			}
		}
			if(acha == true){
				cout << pesq << " foi localizado na posição " << i;
			}else{
				cout << pesq << " nao foi localizado";}
		
		cout << "deseja continuar? ";
		cin >> resp;
	}
	for(i=0;i<12;++i){
		cout << C[i] << endl;
	}
}


		

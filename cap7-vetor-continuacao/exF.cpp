//ler uma matriz A com 30 elementos, a matriz B deverá ter todos os elementos de A ao cubo, no final montar uma rotina de pesquisa sequencial.
#include <iostream>
#include <string>
using namespace :: std;
int main(){
	int A[30],B[30], i,pesq;
	bool acha;
	string resp;

	cout << "Digite os valores: \n";
	for (i=0;i<30;++i){
		cin >> A[i];
	}

	for(i=0;i<30;++i){
		B[i] = (A[i]*A[i]*A[i]);
	}

	cout << "Os valores na matriz B são: \n";
	for(i=0;i<30;++i){
		cout << B[i] << endl;
	}

	resp = "s";
	while (resp == "s"){
		cout << "Entre o nome a ser pesquisa: ";
		cin >> pesq;
		i = 0;
		acha = false;
		while(i<=10 && acha == false){
			if(pesq == B[i]){
		 acha = true;
 		}else{
       		++i;
		}
	       }
	if(acha == true) {
		cout  << pesq <<  " e foi localizado na posição " << i;
	}else{
		cout  << pesq <<  " não foi localizado";
	}
	cout << " Deseja continuar? ";
	cin >> resp;
	}
}


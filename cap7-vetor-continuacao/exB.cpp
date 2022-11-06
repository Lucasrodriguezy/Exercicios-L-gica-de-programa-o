//Ler um vetor A com 15 elementos,depois armazenar os valores na matriz B multiplicados por 5. Apos isso construir uma estrutura de pesquisa binaria para pesquisar os elementos na matriz B.
#include <iostream>
#include <string>
using namespace :: std;
int main(){
	int A[12],B[12],x,i,j,comeco,meio,Final,pesq;
	string resp;
	bool acha;

	cout << "Digite os valores de A: \n";
	for (i=0;i<12;++i){
		cin >> A[i];
		B[i] = A[i] * 5;
	}

	for (i=0;i<11;++i){
		for(j=i+1;j<12;++j){
			if (B[i] > B[j]){
			       B[j] = x;
			       B[j] = B[i];
			       B[i] = x;
			}
		}
	}
	cout << "Os valores ordenados são: \n";
	for (i=0;i<12;++i){
                 cout << B[i] << endl;

		       			       
}
	resp = "s";
	while (resp == "s"){
		cout << "Entre o numero a ser pesquisado: ";
		cin >> pesq;
		comeco = 1;
		Final = 10;
		acha = false;
		while (comeco <= Final && acha == false){
			meio = ((comeco+Final)/2);
			if (pesq == B[meio]){
				acha = true;
			}else{
				if (pesq < B[meio]){
						Final = meio - 1;
						}else{
						comeco = meio + 1;
						}
					}
				}
		if(acha == true){
		cout << pesq << " foi localizado na posição " << meio;
						
}else{

	       cout << pesq << " não foi localizado " ;
	       }
	cout << "Deseja continuar(s/n) ? ";
	cin >> resp;
	}
	}	

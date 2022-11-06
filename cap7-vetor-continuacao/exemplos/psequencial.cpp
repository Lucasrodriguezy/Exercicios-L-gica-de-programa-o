//efetuar uma pesquisa sequencial em um matriz com 10 valores
#include <iostream>
#include <string>
using namespace :: std;
int main(){
	string nome[10],pesq,resp;
	int i;
	bool acha;

	cout << "Enter 10 names: ";
	for (i=0;i<10;++i){
		cin >> nome[i];
	}

	resp = "sim";

	while(resp == "sim"){
		cout << "Search a name: ";
		cin >> pesq;
		i = 1;
		acha = false;
		while (i <= 10 && acha == false){
			if (pesq == nome[i]){
				acha = true;
			}else{ 
				++i;
			}
		}
		if (acha == true) {
			cout << pesq << " foi localizado na posição " << i;
		}else{
			cout << pesq << " não foi localizado ";
		}

		cout << "Deseja continuar? ";
		cin >> resp;
	}

}


	

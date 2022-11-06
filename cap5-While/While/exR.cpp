//apresentar um programa que efetue a leitura de valores positivos ATÉ ler um numero negativo.
//no final apresentar o maior numero e o menor
#include <iostream>
using namespace :: std;
int main (){
	int n=0, maior=0, menor=0;

	while ( n >= 0){
		cout << "Digite seu número: \n";
		cin >> n;
		if (n > maior){
			maior = n;
		}else{
			menor = n;
		}
	}

	cout << "maior: " << maior << "menor: " << menor;
}
		

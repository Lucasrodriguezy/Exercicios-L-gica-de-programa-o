// Calcular a area total de uma residencia (sala, cozinha, banheiro, quintal).
// o programa deve solicitar a entrada do nome, a largura e comprimento do comodo
// e tambem uma mensagem solicitando o usuario a confirmação de novos comodos até dizer "NÃO"
//  O programa deve apresentar o valor total acumulado da area residencial.
#include <iostream>
#include <string>
using namespace :: std;
int main(){
	long int comprimento, largura, area=0, totalArea=0;
	string i, comodo;
	
	while(i != "n"){
		cout << "Digite seu comodo \n"; 
		cin >> comodo;
		cout << "Digite o comprimento \n";
		cin >> comprimento;
		cout << "digite a largura \n";
		cin >> largura;
		area = comprimento * largura;
		totalArea = area + totalArea;
		cout << "Deseja inserir outro comodo? (y/n)\n";
		cin >> i;
	}

	cout << totalArea;
}

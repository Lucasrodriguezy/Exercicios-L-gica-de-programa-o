#include <iostream>
using namespace :: std;
int opcao;
float R,A,B;

//Procedimentos de entrada e saida
float in() {
	float A,B
	cout << "Entre um valor: ";
	cin >> A;
	cout << endl << "Entre um valor para B: ";
	cin >> B;
	
}

void out() {
	float R;
	cout << "O resultado de A com B é : " << R;
	
}

// sub-rotinas de cálculos

float soma(){
	float A,B
	cout << " Rotina de Adição " ;
	in();
	R = A + B;
	out(R);
	return (A + B);
	
}

float subtracao(){
	float A, B
	cout << " Rotina de Subtração ";
	in();
	R = A - B;
	out(R);
	return(A - B);
}

float multiplicacao(){
	float A, B
	cout << "Rotina de multiplição ";
	in(A,B);
	R = (A)*(B);
	out(R);
	return(A * B);

	
}
float divisao(){
	float A, B
	cout << "Rotina de Divisão";
	in(A,B);
	R =A/(B);
	out(R);
	return(A/B);

}

// Programa inicial
int main(){
	int opcao = 0;
	float A,B,R;
	while(opcao != 5){
		cout << "1 -- Adição " << endl;
		cout << "2 -- subtração " << endl;
		cout << "3 -- multiplicação " << endl;
		cout << "4 -- Divisão " << endl;
		cout << "5 -- FIM " << endl;
		cout << "Escolha uma opcão: " ;
		cin >> opcao;
			switch(opcao){
				case 1: 
					soma();
					break;
				case 2:
					subtracao();	
					break;
				case 3:	
					multiplicacao();
					break;
				case 4:
					divisao();
					break;
				case opcao = 5:
					break;
				default: cout << "fim";
			}
		
	}
}

	



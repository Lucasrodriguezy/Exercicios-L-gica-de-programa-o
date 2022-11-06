#include <iostream>
#include <string>
using namespace :: std;
int opcao;
float R,A,B;


void in(float A, float B){
	cout << "Enter a value for A: ";
	cin >> A;
	cout << "Enter a value for B:" ;
	cin >> B;
        

}

void out(float R){
	cout << endl <<"O resultado de A com B é " << R;
}

int sum(float A,float B){
	cout << "sum's routine" << endl;
	in(A,B);
	R=(A + B);
	return R;
}

int sub(int A,int B){
	cout << "sub's routine" << endl;
	in(A,B);
	R=A-B;
	out(R);
	return R;
}
int mult(int A,int B){
	cout << "multiplication's routine" << endl;
	in(A,B);
	R=A*B;
	out(R);
	return R;
}

int div(int A,int B){
	cout << "division's routine" << endl;
	in(A,B);
	R=A/B;
	out(R);
	return R;
}

int main(){
	opcao = 0;
	while(opcao != 5){
		cout << "1 - Adição " << endl;
		cout << "2 - subtração" << endl;
		cout << "3 - multiplicação " << endl;
		cout << "4 - divisão " << endl;
		cout << "5 - Fim de Programa " << endl;
		cout << "Escolha uma opção" << endl;
		cin >> opcao;
		if(opcao != 5) {
			switch (opcao){
				case 1:
					sum(A,B);
					break;
				case 2: 
					sub(A,B);
					break;
				case 3:
				       	mult(A,B);
					break;
				case 4:
					div(A,B);
					break;
				default:
					cout << "fim";
					break;
			}
		}
	}
	return 0;
}
		



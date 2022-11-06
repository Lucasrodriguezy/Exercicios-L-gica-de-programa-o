// mostrar mensagens em números que estão entre 1 e 9 e que estão fora
#include <iostream>
using namespace :: std;
int main() {
	int x;

	cout << "Digite apenas números que estão entre 1 e 9: ";
	cin >> x;

	if (x >=1 && x < 10){
		cout << " seu número está entre 1 e 9";
	}else{ 
		cout << " seu número está fora da faixa permitida";
	}
}

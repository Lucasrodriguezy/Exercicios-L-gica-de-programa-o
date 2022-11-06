// Apresentar a tabuado até 10 de um numero escolhido pelo usuario.
#include <iostream>
using namespace :: std;
int main() {
	int x,t;
	int n = 1;

	cout << "digite um numero: ";
	cin >> x;


	while (n <= 10){
		t = x * n;
		cout << x << " * " << n << " = " << t << "\n";
		n = n + 1;
	}
}


// Apresentar a tabuado até 10 de um numero escolhido pelo usuario.
#include <iostream>
using namespace :: std;
int main() {
        int x,t;
        int n;

        cout << "digite um numero: ";
        cin >> x;

	for(n=1; n <= 10; n++){
		t = x * n;
                cout << x << " * " << n << " = " << t << "\n";
	}
}

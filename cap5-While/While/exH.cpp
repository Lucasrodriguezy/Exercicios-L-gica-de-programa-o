// apresentar um programa que construa uma base, expoente escolhido pelo usuario e o resultado
#include <iostream>
#include <math.h>
using namespace :: std;
int main () {
	int B,n = 0, exp, x;

	cout << " digite sua base: \n";
	cin >> B;
	cout << " digite seu expoente: \n";
	cin >> exp;
	while (n <= exp){
		x = pow(B,n);
		cout << B << " ** " << n << " = " << x << "\n";
	        n = n + 1;
	}
}	


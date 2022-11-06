// Apresentar as potencias de 3 até o expoente 15
#include <iostream>
#include <math.h>
using namespace :: std;
int main () {
	int exp, x;

	while (exp <= 15){
		x = pow(3, exp);
	        cout << " 3 ** " << exp << " = " << x << "\n";
		exp = exp + 1;	
	}
}


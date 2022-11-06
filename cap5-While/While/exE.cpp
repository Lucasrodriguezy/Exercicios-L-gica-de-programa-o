// mostrar todos os numeros impares de 0 até 20
#include <iostream>
using namespace :: std;
int main () {
	int n = 0, x;

	while (n != 20){
		x = n % 2;
		if (x != 0){
		       cout << n << " ";
		}
 		n = n + 1;
	}
}	
			



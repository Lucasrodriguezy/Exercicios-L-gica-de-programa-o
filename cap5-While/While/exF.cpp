// Apresentar todos os numeros divisiveis por 4 de 0 até 200;
#include <iostream>
using namespace :: std;
int main (){
	int rest, n = 1;

	while (n <= 200){
		rest = n % 4;
		if (rest == 0){
			cout << n << " ";
		}
		n = n + 1;
	}
}

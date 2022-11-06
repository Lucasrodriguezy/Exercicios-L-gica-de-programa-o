// Apresentar o quadrado de numeros inteiros de 15 à 200
#include <iostream>
using namespace :: std;
int main(){
	int n=1;
	int x;

	while(n <=200){
		x = n*n;
		cout << n << " = " << x << "\n";
		n = n +1;
	}

}

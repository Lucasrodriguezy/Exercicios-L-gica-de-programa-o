//apresentar o total dos cem primeiros numeros 
#include <iostream>
using namespace :: std;
int main () {
	int x=0, n = 1;
	while (n <= 100){
		x = x + n;
		cout << n << "+";
		n = n + 1;
		
	}
	cout << "                " << x;
}	
		

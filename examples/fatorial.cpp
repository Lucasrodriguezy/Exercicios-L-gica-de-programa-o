//calcula uma fatorial usando FOR loop

#include <iostream>
using namespace :: std;
int main(){
	int C[5],n;
	long double factorial = 1;

	cout << "Enter a positive integer: ";
	cin >> n;

	if (n < 0){
		cout << "Error! does not factorial of negative numbers ";
	}else{
		for(int i = 1; i<=n; i++){
			factorial *=i;
		}
		cout << "Factorial of " << n << " = " << factorial;
	}

	return 0;
}

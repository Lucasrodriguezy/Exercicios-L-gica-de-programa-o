//ler 15 numeros e apresentar o resultado do somatorio da fatorial de todos eles
//(IMCOMPLETO)
#include <iostream>
using namespace :: std;
int main () {
	long long int x,sum,i=1,fatorial=1,n=1;
	
	while (n <= 15){
		cin >> x;
		while ( i <= x){
		fatorial = fatorial * i;
		i++;
	}
		cout << "  " << fatorial << "\n";
		n++;
		sum = fatorial + sum;
	}
	cout << "o somatorio de todos as fatoriais é   " << sum;
}


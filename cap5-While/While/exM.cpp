//ler 10 numeros e apresentar no final o somatorio e a média dos valores lidos
#include <iostream>
using namespace :: std;
int main (){ 
	int sum=0, i=1,n;
	float av;
	while ( i <= 10){
		cin >> n;
		sum = n + sum;
		i++;
	}
	av = (sum/10);
	cout << " A soma total dos numeros é: " << sum << "\n";
	cout << " a média dos numeros é: " << av << "\n";
}

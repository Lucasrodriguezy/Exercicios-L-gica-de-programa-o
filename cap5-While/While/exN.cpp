//fazer um programa para leitura sucessiva de numeros  e no final apresentar o somatorio, a media e numero de numeros lidos, os numeros deverão ser positivos até que se digite um negativo.
#include<iostream>
using namespace :: std;
int main (){
	int av, sum=0, count=0,n;
	while (n > 0) {
		cin >> n;
		sum = sum + n;
		count++;
	}
	av = sum/count;
	cout << " somatorio " << sum << "\n";
	cout << " media " << av << "\n";
	cout << " quantidade de numeros: " << count << "\n";
}

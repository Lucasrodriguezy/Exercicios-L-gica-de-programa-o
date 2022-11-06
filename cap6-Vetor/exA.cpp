//Ler 10 elementos de uma matriz tipo vetor e apresentá-los.
#include <iostream>
using namespace :: std;
int main (){
	int x[10];

	for (int n = 0; n < 10; ++n){
		cin >> x[n];
	}

	cout << "The numbers are: ";
	
	for (int i = 0; i < 10; ++i){
		cout << x[i] << "	";
	}
}

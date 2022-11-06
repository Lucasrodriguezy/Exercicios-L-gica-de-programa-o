#include <iostream>
using namespace :: std;
int main () {
	int x, rest;
	cin >> x;
	rest = x%2;

	if (rest == 0){
		cout << x << " é um número par";
	}else{
		cout << x << " é um número impar";
	}
}

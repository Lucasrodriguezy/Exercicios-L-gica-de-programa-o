// escreva um programa que declare um inteiro, um real e um char, associe as variaveis aos ponteiros, MODIFIQUE os valores das variaveis usando os ponteiros, imprima os valores antes e depois a modifiação;
#include <iostream>
using namespace :: std;
int main(){
	int i = 5;
	float f = 5.5;
	char c = 'b';
	cout << i << endl << f << endl << c << endl;

	int *pi = &i;
	float *pf = &f;
	char *pc = &c;

	*pi = 10;
	*pf = 11;
	*pc = 'd';

	cout << *pi << endl << *pf << endl << *pc;

	}

//crie uma funcao que troque os valores de duas variaveis, usando ponteiros
#include <iostream>
using namespace :: std;
int trocar(int* a, int* b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
	return(0);
}
int main(){
	int a,b,aux;
	cin >> a >> b;
	cout << "O valor de A: " << a << endl << "O valor de B: " << b<< endl;
	trocar(&a,&b);
	cout << "Valor novo de A: " << a << endl <<  "Valor novo de B: " << b << endl;
}

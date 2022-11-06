// ler dois numeros em A e B, criar uma funçao que retorne o dobro da soma de dois numeros, o dobro de A deverá ser armazenado em A e B no propio B;
#include<iostream>
using namespace :: std;
int dobroSoma(int *a, int *b, int *dobro){
	*a = (*a)*2;
	*b = (*b)*2;
	*dobro = *a + *b;
	cout << "dobro de A: " << *a << endl << "dobro de B: " << *b << endl << "soma do dobro de A e B: " << *dobro;
	return(0);
}
int main(){
	int a,b,dobro;
	cin >> a >> b ;
	dobroSoma(&a,&b,&dobro);
}

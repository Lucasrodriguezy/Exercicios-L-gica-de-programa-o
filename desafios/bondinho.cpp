//escrever um programa para dizer se é possivel levar em um bondinho 50 pessoas, o numero maximo é 50 contando com aluno - A e monitores - M
#include <iostream>
using namespace :: std;
int main(){
	int A,M,T;
	cin >> A >> M;
	T = A + M;
	if (T <= 50){
		cout << "S";
	}else {
		cout << "N";
	}
}

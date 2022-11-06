#include <iostream>
using namespace :: std;
int main (){
	float A,B;
	cin >> A >> B;
	float T = (A+B)/2;
	if (T >= 7){
		cout << "Aprovado";
	}else if(T < 7 && T >= 4) {
		cout << "Recuperação";
	}else { 
		cout << "Reprovado";
	}
}

#include <iostream>
using namespace :: std;
int main(){
	int X;
	cin >> X;
	if (X>0){
		cout << "positivo";
	}else if(X<0){
		cout << "negativo";
	}else if(X==0){
		cout << "nulo";
	}
}

#include <iostream>
using namespace :: std;
int main(){
	int x,y;

	cin >> x >> y;
	if(&x > &y){
		cout << "o endereço x=" << &x << "é maior";
	}else{
		cout << "o endereço y=" << &y << "é maior";
	}
}	

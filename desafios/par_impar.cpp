#include <iostream>
using namespace :: std;
int main(){
	int bino,cino;
	cin >> bino >> cino;
	int T = bino + cino;
	if(T%2 == 0){
		cout << "bino";
	}else {
		cout << "cino";
	}
}

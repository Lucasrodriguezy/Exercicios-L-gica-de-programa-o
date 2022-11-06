#include<iostream>
using namespace :: std;
int main(){
	int a1,a2,d1,d2;
	cin >> a1 >> d1 >> a2 >> d2;
	if(a1 != d2 && a2 == d1 ){
		cout << 1;
	}else if(a2 != d1 && a1 == d2){
		cout << 2;
	}else{
		cout << -1;
	}
}


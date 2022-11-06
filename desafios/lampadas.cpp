#include <iostream>
using namespace :: std;
int main(){
	int a = 0,b = 0,i1=1,i2=2,n,x;
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> x;
		if(x == i2){
			a = !a;
			b = !b;
		}else {
			a = !a;
		}	
	}

	cout << a << "\n" << b << "\n";
}

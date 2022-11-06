#include <iostream>
using namespace :: std;
int main(){
	int p1,p2,c1,c2;
	cin >> p1 >> c1 >> p2 >> c2;
	
	int total1, total2;

	total1 = p1*c1;
	total2 = p2*c2;

	if(total1 == total2){
		cout << 0;
	}else if(total1 > total2){
		cout << -1;
	}else {
		cout << 1;
	}
}

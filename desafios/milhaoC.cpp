#include <iostream>
using namespace :: std;
int main(){
	int n, a , i, soma;
	cin >> n;
	soma = 0;
	for(i=1;i<=n;++i){
		cin >> a;
		soma += a;
		if(soma >= 1000000){
			break;
		}
	}
	cout << i;
	
}

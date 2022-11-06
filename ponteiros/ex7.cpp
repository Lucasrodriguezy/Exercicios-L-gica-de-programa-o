#include<iostream>
using namespace :: std;
int soma(int *a,int *b){
	*a = *a+ *b;
	return(0);
}
int main(){
	int a, b;
	cin >> a >> b;
	soma(&a,&b);
	cout << a << " " << b ;
}

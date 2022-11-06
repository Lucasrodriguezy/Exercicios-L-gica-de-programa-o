#include <iostream>
using namespace :: std;
void prest(double,double,double);
int main(){
	double total,value,tax,time;
	cin >> value >> tax >> time;
	total = prest(value,tax,time);
	cout << total;
}

void prest(){
        double presta,value, tax, time;
	presta= value+(value*(tax/100)*time);
	
}

	
	
	


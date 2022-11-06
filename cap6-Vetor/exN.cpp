// Ler 20 elementos(reais) para temperaturas em celsius, no fim, apresentar a maior, a menor e a média das temperaturas lidas.
#include <iostream>
using namespace :: std;
int main (){
	int  A[20], major=0, minor=0, average=0, i,div=0;

	for (i=0;i<20;++i){
		cout << "Enter numbers in Celsius temperature: ";
		cin >> A[i];
	}

	major = A[0];
	for (i=0; i<20; ++i){
		
		if(A[i] > major){
			major = A[i];
		}
	
		average = A[i] + average;
		++div;
}
	minor = A[0];
	for (i=0; i<20; ++i){
		if(A[i] < minor){
                   	  minor = A[i];
                }
	}


	average = average/div;
	cout << "the average is " << average << "\n";
	cout << "the major number is : " << major << "\n";
	cout << "the minor number is: " << minor << "\n";
}

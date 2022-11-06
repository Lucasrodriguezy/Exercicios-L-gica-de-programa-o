// apresentar o resultado da soma e media de numeros pares situados entre 50 e 70
#include <iostream>
using namespace :: std;
int main (){
	int average, sum=50, n = 50,i = 0;
	
	while (n <= 70){ 
		n = n + 2;
		sum = n + sum;
		i++;
		
	}
	
	average = (sum/i);
	cout << "a média é " <<  average << "\n";
	cout << " a soma é "<< sum << "\n";
}




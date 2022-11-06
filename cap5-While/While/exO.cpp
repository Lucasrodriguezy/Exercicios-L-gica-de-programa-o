//apresentar o resultado da fatorial de numeros impares entre 1 à 10
//(IMCOMPLETO)
#include <iostream>
using namespace :: std;
int main(){
	int n=1, i=1, fatorial=1,rest;
	
		
		while (n < 10){
		rest = fatorial % 2;
		if(fatorial != 0){
		while ( i <= n){
                fatorial = fatorial * i;
		i++;
		cout << n <<" "<< fatorial << "\n";
		n = n + 2;
		}
		}
		n = n + 2;
		
				
}
}




#include <iostream>
using namespace :: std;
int main(){
int A[30], rest, i,n=0;
float percent,impar=0;
        for (i=0; i<5; ++i){
                cout << "Enter a number: ";
                cin >> A[i];
		++n;

        }

        for (i=0; i<5; ++i){
                rest = A[i]%2;
                if(rest != 0){
			++impar;
             	}

        }
	 percent = impar/n;
	 percent = percent * 100;

	cout << "O vetor A contem " << impar <<" numeros impares e " << percent << "% "<<" de numeros impares.\n";

}


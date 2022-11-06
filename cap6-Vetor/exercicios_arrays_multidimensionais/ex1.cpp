//Criar um programa que declare um array de duas dimensoes 2 x 3;
//com os valores 5 6 7 
//		 8 9 10
#include <iostream>
using namespace :: std;
int main (){
	int A[2][3] = {{5,6,7},{8,9,10}},i,j;

	for (i=0;i<2;++i){
		for (j=0;j<3;++j){
			cout << "A ["<<i<< "][" << j << "] ="<< A[i][j] <<endl;
		}
	}
}

//escrever um programa que multiplique dois arrays com duas dimensoes um por um, o produto da matriz se dá apenas se o numero de colunas do primeiro array for igual ao numero de linhas do segundo.
//colunas do A = linhas do B.
#include <iostream>
using namespace :: std;
int main () {
	int A[2][2] = {{1,2},{3,4}},B[2][3]={{5,6,7},{7,8,9}},P[2][3],i,k=0,j;

	for (i=0;i<2;++i){
		for (j=0;j<3;++j){
			P[i][j] = (A[i][j]*B[i][j]) + (A[i][j]*B[k][j]);
				
		}
		
				}

	cout << "[ " << P[0][0] << " " << P[0][1] <<" "<< P[0][2] << " ]"<< endl;
	cout << "[ " << P[1][0] << " " << P[1][1] << " "  << P[1][2] << " ]" << endl;

}


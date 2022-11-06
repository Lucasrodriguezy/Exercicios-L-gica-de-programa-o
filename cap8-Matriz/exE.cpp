//ler duas matrizes A e B cada uma com 12 elementos, a matriz C deverá ter duas colunas contendo A e B, a primeira coluna será os elementos de A multiplicados por 2 e a segunda B subtraidos por 5;
#include <iostream>
using namespace :: std;
int main(){
	int A[12],B[12],C[12][2],i,j;

	for(i=0;i<12;++i){
		cout << "digite A:\n";
		cin >> A[i];
		cout << "digite B:\n";
		cin >> B[i];
	}

	for(i=0;i<12;++i){
		C[i][0] = A[i]*2;
	}

	for(i=0;i<12;++i){
		C[i][1] = B[i]-5;
	}

	for(i=0;i<12;++i){
		for(j=0;j<2;++j){
			cout << "C[" << i << "][" << j << "] = " << C[i][j] << endl;
		}
	}
}

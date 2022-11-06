// ler A e B, a matriz C deverá ter duas colunas com os elementos de A e B
#include <iostream>
using namespace :: std;
int main(){
	int A[7],B[7],C[7][2];

	for(int i=0;i<7;++i){
		cin >> A[i];
	}

	for(int i=0;i<7;++i){
                cin >> B[i];
        }

	for(int i=0;i<7;++i){
			C[i][0] = A[i];
			C[i][1] = B[i];
	}
	
	cout << "C: ";
	for(int i=0;i<7;++i){
		for(int j=0;j<2;++j){
                cout << C[i][j];	
	       	}
	}
}

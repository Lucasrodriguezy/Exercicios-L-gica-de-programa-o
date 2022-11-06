// ler uma matriz A com 6 linhas e 5 colunas. construir uma matriz B com mesma dimensao. para cada elemento par da matriz A deverá ser somado 5, para cada elemento impar deverá ser subtraido 4; Apresentar A e B;
#include <iostream>
using namespace :: std;
int main(){
	int A[5][6],B[5][6];
	int i, j;
	
	for(i=0;i<5;++i){
		for(j=0;j<6;++j){
			cin >> A[i][j];
		}
	}
	int rest;
	for(i=0;i<5;++i){
		for(j=0;j<6;++j){
			rest = A[i][j] - 2 * (A[i][j]/ 2);

			if (rest == 0){ 
				B[i][j] = (A[i][j]+5);
			}else{
				B[i][j] = (A[i][j]-4);
			}
		}
	}

	for(i=0;i<5;++i){
                for(j=0;j<6;++j){
                        cout << "A[" << i << "][" << j <<"]= " << A[i][j] << "		"  << "B[" << i << "][" << j <<"]= " << B[i][j] << endl ;
                }
        }
}

// ler uma matriz A com 4 linhas e 5 colunas com elementos em celsius. construir matriz B com mesma dimensao e os elementos de A convertidos em fahrenheit. No final apresentar A e B .
#include <iostream>
using namespace :: std;
int main(){
	float A[4][5],B[4][5];
	int i,j;

	for(i=0;i<4;++i){
		for(j=0;j<5;++j){
			cout << "digite em celsius\n";
			cin >> A[i][j];
		}
	}

	for(i=0;i<4;++i){
                for(j=0;j<5;++j){
			B[i][j] = (A[i][j] * 1.8 + 32);
		}
	}

	for(i=0;i<4;++i){
                for(j=0;j<5;++j){
			cout << "Celsius[" << i << "][" << j << "] = " << A[i][j];
                        cout << "               " << "fahreindt[" << i << "][" << j << "] = " << B[i][j] << endl;
                        }
        }
}


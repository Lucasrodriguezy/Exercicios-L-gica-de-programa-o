//ler duas matrizes A e B com 15 elemementos, construir uma matriz C da mesma dimensão formada pela soma dos quadrados de cada elemento correspontes de A e B; Matriz C deve estar em ordem decrescente.
#include <iostream>
using namespace :: std;
int main(){
	int A[10], B[10], C[10],i,j;
	for(i=0;i<10;i++){
		cin >> A[i];
	}

	for(i=0;i<10;++i){
		cin >> B[i];
	}

	for(i=0;i<10;++i){
		C[i] = (A[i] + B[i])*(A[i] + B[i]);
	}
	
	int x;
	for(i=0;i<9;++i){
		for(j=i+1;j<=10;++j){
			if(C[j] > C[i]){
				x = C[i];
				C[i] = C[j];
				C[j] = x;
			}
		}
	}

	for(i=0;i<10;++i){
		cout << C[i] << endl;
	}
}



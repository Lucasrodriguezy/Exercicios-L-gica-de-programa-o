// ler duas matrizes A e B do tipo vetor com 15 elementos cada, construir outras duas matrizes C e D, sendo que cada elemento de C deverá ser o somatorio dos elementos da matriz A, e cada elemento da matriz D a fatorial do elemento de B, em seguida construir uma matriz E que deverá conter a diferença dos elementos C e D com a soma dos elementos A e B.
#include <iostream>
using namespace :: std;
int main(){
	int A[5],B[5],i;
	for(i=0;i<5;++i){
		cin >> A[i];
	}

	for(i=0;i<5;++i){
		cin >> B[i];
	}

	int C[5],sum=0;
	for(i=0;i<5;++i){
                for(int n = 0; n<=A[i]; n++){
                        sum += n;
                }
              	C[i] = sum;

        }
	int D[5],fat=1;
	for(i=0;i<5;++i){
		  for(int n = 1; n<=B[i]; n++){
                        fat *= n;
                }
                D[i] = fat ;
	}


	  for(i=0;i<5;++i){
		  cout << D[i] << endl;
                        
                }             
}

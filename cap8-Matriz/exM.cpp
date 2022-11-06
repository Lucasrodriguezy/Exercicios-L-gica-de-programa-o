//apresentar uma matriz A com 5x5 o somatorio dos elementos situados nas posiçoes iguais impares na referida matriz. 1,1 3,3 5,5;

#include <iostream>
using namespace :: std;
int main(){
	int A[5][5],i,j,resti,restj,aux;

	for(i=0;i<5;++i){
		for(j=0;j<5;++j){
			cin >> A[i][j];
		}
	}

	 for(i=0;i<5;++i){
                for(j=0;j<5;++j){
			if(i==j){
				resti = i%2;
				restj = j%2;
				if(resti == 1 && restj == 1){
					aux = A[i][j];
					A[i][j] = 0;
					for(int n=0;n<aux;++n){
						A[i][j] +=n;
					}
				}
			}
		}
	 }

	  for(i=0;i<5;++i){
                for(j=0;j<5;++j){
			cout << "A[" << i << "][" << j << "]= " << A[i][j] << endl;
		}
	  }
}

			

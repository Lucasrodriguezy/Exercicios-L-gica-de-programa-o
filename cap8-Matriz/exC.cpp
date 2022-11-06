//ler 20 elementos de uma matriz 4 x 5, e a apresentar os valores.

#include <iostream>
using namespace :: std;
int main(){
	int A[4][5];

	for(int i=0;i<4;++i){
		for(int j=0;j<3;++j){
			cin >> A[i][j];
		}
	}

	for(int i=0;i<4;++i){
                for(int j=0;j<3;++j){
                        cout << A[i][j];
                }
        }

}

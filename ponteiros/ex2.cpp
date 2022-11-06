#include <iostream>
using namespace :: std;
int lerAeB(int* A,int* B,int* X){
	
	cin >> *A;
	cin >> *B;
	*X = (*A)*(*B);
	cout << *A << "x" << *B << "=" << *X << endl;

	return(0);
}

int main(){
	int A,B,X;
	char resp ='s';
	while(resp == 's'){
	lerAeB(&A,&B,&X);
	cout << "Deseja continuar? (s/n)" << endl;
	cin >> resp;

	}
	

}


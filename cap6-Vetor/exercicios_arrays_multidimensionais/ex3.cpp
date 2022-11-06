// imprimir o array coluna por coluna assim: col 0: 5 8
// 					     col 1: 6 9
// 					     col 2: 7 10
#include <iostream> 
using namespace :: std;
int main (){
	int A[3][2]= {{5,8}, {6,9}, {7,10}};

	cout << "col 0: " << A[0][0] << " " << A[0][1] << "\n";
	cout << "col 1: " << A[1][0] << " " << A[1][1] << "\n";
	cout << "col 2: " << A[2][0] << " " << A[2][1] << "\n";
}


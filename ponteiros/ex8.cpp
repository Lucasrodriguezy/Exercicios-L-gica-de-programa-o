// criar um array com 10 elementos e os imprimir usando ponteiros
#include <iostream>
using namespace :: std;
int imprimir(int* array){
	for(int i=0;i<10;++i){
		cout << *array[i] << endl;
	}
	return (0);
}
int main(){
	int array[10];
	for(int i=0;i<10;++i){
		cin >> &array[i];
	}

	imprimir(& array[10]);
}



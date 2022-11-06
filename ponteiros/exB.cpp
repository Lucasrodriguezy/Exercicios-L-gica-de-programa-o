//escreva um programa com duas variaveis inteiras, compare as duas e apresente a maior
#include <iostream>
using namespace :: std;
int main(){

	int x =1;
	int y =2;

	if(&x>&y){
		cout << "X é maior" << &x;
	}else{
		cout << "Y é maior" <<&y;
	}
}

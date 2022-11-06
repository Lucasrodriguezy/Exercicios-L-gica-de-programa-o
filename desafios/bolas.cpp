#include <iostream>
using namespace :: std;
int main(){
	int quantidade[10];

	for(int i=0;i<8;++i){
		int b; //entra o numero da bola;
		cin >> b;
		quantidade[b]++;
	}

	bool S = true;

	for(int i=0;i<10;++i){
		if(quantidade[i] > 4){
			S = false;

			if(S){
				cout << "S\n";
			}else{
				cout << "N\n";
			}
		}
	}
}

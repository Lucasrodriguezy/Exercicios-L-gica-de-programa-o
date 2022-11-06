// Ordenar os 20 nomes lidos na matriz nome[];
#include <iostream>
#include <string>
using namespace :: std;
int main(){
        string nome[22];
        int i,j;
        string x;
//Rotina de leitura
        cout << "Digite os nomes: ";
        for (i=0;i<20;++i){
                cin >> nome[i];
        }
// 
	for (i=0;i<19;++i){
		for (j=i+1;j<20;++j){
			if (nome[i] > nome[j]){
				x = nome[i];
				nome[i] = nome[j];
				nome[j] = x;
			}
		}
	}
	cout << "Em ordem alfabetica: \n";
	for (i=0;i<20;++i){
		cout << nome[i] << endl;
	}

        
}
    

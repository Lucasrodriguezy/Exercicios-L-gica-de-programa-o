// elaborar um menu usando registros que armazene o nome e altura de 15 pessoas 
// 1: cadastrar 15 registros
// 2: apresentar os registros das pessoas menores ou iguais a 1.5m
// 3: apresentar os registros das pessoas que sejam maiores que 1.5m e menores que 2.0 m
// 4: apresentar todos os registos com a media extraida de todas as alturas
// 5: FIM
#include <iostream>
#include <string>
using namespace :: std;
struct registro{
	string nome;
	float altura;
};
	
int main(){
	registro pessoas[15];
	int i, opcao;
	float soma;
	float media;

	while(opcao!=5){
		cout << "1: cadastrar " << endl;
		cout << "2: pessoas menores ou iguais a 1.5m " << endl;
		cout << "3: pessoas entre 1.5 e 2.0. " << endl;
		cout << "4: todos os registros e a media das alturas " << endl;
		cout << "5: FIM " << endl;
		cin >> opcao;

		if(opcao == 1){
			for(i=0;i<15;++i){
			cout << "Nome: " << endl;
			cin >> pessoas[i].nome;
			cout <<  "altura: " << endl;
			cin >> pessoas[i].altura;
			}
		}

		if(opcao == 2){
			for(i=0;i<15;++i){
			if(pessoas[i].altura <= 1.5){
				cout << pessoas[i].nome << endl;
				cout << pessoas[i].altura << endl;
			}
			}
		}

		if(opcao == 3){
			for(i=0;i<15;++i){
				if(pessoas[i].altura >= 1.5 && pessoas[i].altura <= 2){
				cout << pessoas[i].nome << endl;
			      	cout << pessoas[i].altura << endl;
				}
			}
		}
		if(opcao == 4){
			for(i=0;i<15;++i){
				cout << pessoas[i].nome << endl;
				cout << pessoas[i].altura << endl;
				soma += pessoas[i].altura;
				if(i == 4){
					media = soma/15;
					cout << "media: " << media << endl ;
			}
		
	}
	}
}
}

#include <iostream>
#include <string>
using namespace :: std;
struct form{
	int codigo;
	string nome;
	int idade;
};

int main(){
	//Entrada de Dados
	int i,media,codigopesq;
	char resp;
	bool acha;
	int opcao;
	form A[10];

	while(opcao!=5){
	cout << "1 - Cadastrar" << endl;
	cout << "2 - Pesquisar" << endl;
	cout << "3 - Classificar" << endl;
	cout << "4 - Apresentar" << endl;
	cout << "5 - FIM" << endl;
	cin >> opcao;
	if(opcao == 1){
	for(i=0;i<10;++i){
		cout << "Codigo: ";
		cin >> A[i].codigo;
		cout << "nome: ";
		cin >> A[i].nome;
		cout << "idade: ";
		cin >> A[i].idade;
		}
	}
	//Ordenaçao de dados
	if(opcao == 3){
	string x;
                for(i=1;i<9;++i){
                        for(int j=j+1;j<10;++j){
                        if(A[i].nome > A[j].nome){
                                x = A[i].nome;
                                A[i].nome = A[j].nome;
                                A[j].nome = x;

                                }
                        }
                }
	}
	//Algoritmo de pesquisa sequencial
	if(opcao == 2){
	resp = 's';
	while(resp=='s'){
		cout << "Qual o codigo - 1 ao 10?";
		cin >> codigopesq;
		i = 1;
		acha = false;
		while(i<=10 && acha == false){
			if(codigopesq==A[i].codigo){
				acha = true;
			}else{
				++i;
			}
		}
		if(acha==true){
			cout << "Nome: " << A[i].nome;
			cout << " Idade: " << A[i].idade;
		}else{
			cout << "nome inexistente";
		}
		cout << "Deseja continuar a pesquisa (s/n)?";
		cin >> resp;
	}
	}
	//Saída de dados
	if(opcao == 4){	
	for(i=0;i<10;++i){
		cout << "codigo: " << A[i].codigo << endl;
		cout << "nome: " << A[i].nome << endl;	
		cout << "idade: " << A[i].idade << endl;
		}
}
}
}

//Criar uma menu que :
//1: cadastre 20 registros(Apos o cadastro efetuar a classificaçao por nome)
//2:Pesquisar um dos 20 registros pela busca binaria, apresentar a media e se doi reprovado se a media for abaixo de 5 e aprovado acima de 5
//3: apresentar todos os registros, medias e mensagem de aprovacao ou reprovaçao
//4: FIM
#include<iostream>
#include<string>
using namespace :: std;

struct form{
	string nome;
	float notas[3];
	float media;
	string situacao;
};

int main(){
	form aluno[20];
	int i=0,j,opcao=0;
	float soma[20];
	bool acha;
	string resp,pesq;
	char s_n = 's';
	int comeco,meio, fim;

		while(opcao!=4){
		cout << "1: Cadastrar " << endl;
		cout << "2: Pesquisar " << endl;
		cout << "3: Apresentar " << endl;
		cout << "4: FIM " << endl;
		cin >> opcao;
		
		if(opcao == 1){
			while(s_n == 's'){
			//Entrada de dados
			cout << "Nome: ";
			cin >> aluno[i].nome;
			cout << "Notas: ";
			for(j=0;j<3;++j){
				cin >> aluno[i].notas[j];
				soma[i] = aluno[i].notas[j] + soma[i];
			}
			aluno[i].media = soma[i]/3;
			if(aluno[i].media >=5){
				aluno[i].situacao = "Aprovado";
			}else{
				aluno[i].situacao = "reprovado";
			}
				cout << "Deseja continuar?(s/n)" << endl;
				cin >> s_n;
				++i;
			
			}
			

			//Ordenaçao
			string x;
			for(i=1;i<9;++i){
                        for(j=j+1;j<10;++j){
                        if(aluno[i].nome > aluno[j].nome){
                                x = aluno[i].nome;
                                aluno[i].nome = aluno[j].nome;
                                aluno[j].nome = x;

                                }
                        }
                }
		}
	
	

	//Pesquisa binari (X) Usar pesquisa sequencial :)
	if(opcao == 2){
	resp = "s";
	while(resp == "s"){
		cout << "Entre o nome a ser pesquisado " << endl;
		cin >> pesq;
		comeco = 1;
		fim = 20;
		acha = false;
		while(comeco <= fim && acha == false){
			meio = (comeco + fim)/2;
			if(pesq == aluno[meio].nome){
				acha = true;
			}else{
				if(pesq < aluno[meio].nome){
					fim = meio - 1;
				}else{
					comeco = meio + 1;
				}
			}
	
		}
		//Resultado da pesquisa
		if(acha==true){
			cout << pesq << " Foi localizado na posicao " << meio;	
		}else{
			cout << " nao foi localizado";
		}
		cout << "Deseja Continuar? ";
		cin >> resp;

	}
	}
	
		//Saída dos dados
		if(opcao == 3){
			for(i=0;i<20;++i){
				cout << "Nome: " << aluno[i].nome << endl;
				for(j=0;j<3;++j){
					cout << "Notas: " << aluno[i].notas[j] << "  ";
				}
				cout << endl << "Média: " << aluno[i].media << endl;
				cout << "voce está " << aluno[i].situacao << endl;

		}
	}
}
}



	





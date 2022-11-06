//cadastre 10 registros
//pesquise um registro de cada vez pelo campo nome.
#include<iostream>
using namespace::std;
	struct bimestre{
		int falta[4];
		float nota[4];
	};
	struct ficha_academica{
		char nome[50];
		int serie;
		char turma[1];
		char disciplina[20];
		bimestre boletim;
	};
	

	int main(){
		int total_faltas,soma_notas,media;

		ficha_academica aluno[10];
		for(int i=0;i<10;++i){
		cin.get(aluno[i].nome,50);
		cin >> aluno[i].serie;
		cin.get(aluno[i].turma,1);
		cin.get(aluno[i].disciplina,20);
		
		for(int j=0;j<4;++j){
			cin >> aluno[i].boletim.falta[j];
			cin >> aluno[i].boletim.nota[j];
		}
		}
		for(int i=0;i<10;++i){
			total_faltas = 0;
			soma_notas = 0;
			for(int j=0;j<4;++j){
			total_faltas = total_faltas + aluno[i].boletim.falta[j];
			soma_notas = soma_notas + aluno[i].boletim.nota[j];
			}
			media = soma_notas/4;
			
			cout << aluno[i].nome << endl;
			cout << aluno[i].serie << endl;
			cout << aluno[i].turma << endl;
			cout << aluno[i].disciplina << endl;
			cout <<total_faltas << endl;
			cout << media << endl;
			}
	}


// Matricula, nome e salario, criar um menu que execute:
// 1: cadastrar 20 empregados
// 2: classificar os registros por numero de matricula
// 3: pesquisar um determinado empregado pelo numero da matricula( metodo binario)
// 4:apresentar de forma ordenada os empregados que recebem salarios acima 1000R$
// 5: empregados que recebem salarios abaixo de 1000R$
// 6: empregados que recebem salarios iguais a 1000R$
// 7: FIM
#include <iostream>
#include <string>
using namespace :: std;
struct registro{
        int matricula;
        string nome;
        int salario;
};
int main(){
        registro empregado[20];
        int i=0,j,opcao=0,pesq;
        bool acha;
        string resp;
        int comeco,meio, fim;

        while(opcao!=7){ 
               cout << "1: Cadastrar " << endl;
               cout << "2: Classificar" << endl;
               cout << "3: Pesquisar" << endl;
               cout << "4: salarios >= 1000R$" << endl;
               cout << "5: salarios <= 1000R$" << endl;
               cout << "6: salarios = 1000R$" << endl;
               cout << "7: FIM" << endl;
               cin >> opcao;

               if(opcao==1){
                       for(i=0;i<20;++i){
                               cout << "Matricula: ";
                               cin >> empregado[i].matricula;
                               cout << endl << "Nome: ";
                               cin >> empregado[i].nome;
                               cout << endl <<"Salario: ";
                               cin >> empregado[i].salario;
                       }
	       }

		       if(opcao==2){
			int x;
                        for(i=1;i<19;++i){
                        for(j=j+1;j<20;++j){
                        if(empregado[i].matricula > empregado[j].matricula){
                        	x = empregado[i].matricula;
                                empregado[i].matricula = empregado[j].matricula;
                                empregado[j].matricula = x;
			}
			}
			}
		       }

		       if(opcao==3){
		resp = "s";
       		while(resp == "s"){
               	cout << "Entre a matricula a ser pesquisado " << endl;
                cin >> pesq;
                comeco = 1;
                fim = 20;
                acha = false;
                while(comeco <= fim && acha == false){
                        meio = (comeco + fim)/2;
                        if(pesq == empregado[meio].matricula){
                                acha = true;
                        }else{
                                if(pesq < empregado[meio].matricula){
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
		       

		if(opcao==4){
			for(i=0;i<20;++i){
				if(empregado[i].salario > 1000){
		
				cout << "Matricula: " << empregado[i].matricula << endl;
				cout << "Nome: " << empregado[i].nome << endl;
				cout << "Salário " << empregado[i].salario << endl;
		       }
			}
		}
		if(opcao==5){
			for(i=0;i<20;++i){
				if(empregado[i].salario < 1000){
				cout << "Matricula: " << empregado[i].matricula << endl;
                                cout << "Nome: " << empregado[i].nome << endl;
                                cout << "Salário " << empregado[i].salario << endl;
				}
			}
		}

		if(opcao==6){
			for(i=0;i<20;++i){
                                if(empregado[i].salario == 1000){
                                cout << "Matricula: " << empregado[i].matricula << endl;
                                cout << "Nome: " << empregado[i].nome << endl;
                                cout << "Salário " << empregado[i].salario << endl;
                                }
                        }
                }

	   }
	}
		

// ler 20 elementos em A e construir uma matriz B com todos os elementos de A acrescentados de mais 2, no fim todos os valores de B deverão estar em ordem crescente e deve estar montado uma rotina de pesquisa binaria.
#include <iostream> 
#include <string>
using namespace :: std;
int main(){ 
	   int A[20], B[20],i,j,x,pesq,comeco,meio,Final;
	   string resp;
	   bool acha;

	for(i=0;i<20;++i){
		cin >> A[i];
		B[i] = A[i] + 2;
	}
	
	for(i=0;i<19;++i){
		for(j=i+1;j<20;++j){
			if(B[i] > B[j]){
				x = B[j];
				B[j] = B[i];
				B[i] = x;
			}
		}
	}
	cout << "Matriz B: \n";
	for(i=0;i<20;++i){
		cout << B[i] << "\n";
	}

	resp = "s";
	while(resp == "s"){
		cout << "Search: ";
		cin >> pesq;
		comeco = 0;
		Final = 20;
		acha = false;
		while(comeco <= Final && acha==false){
			meio = (comeco + Final)/2;
			if(pesq == B[meio]){
				acha = true;
			}else{
				if(pesq > B[meio]){
					comeco = meio + 1;
				}else{
					Final = meio - 1;
				}
			}
		}
		if(acha == true){
			cout << pesq << "foi achado na posicao " << meio;
		}else{
			cout << pesq << "Não foi achado.";
		}
		cout << " Deseja continuar? (s/n)";
		cin >> resp;
	}
}

	
		

//Ler 10 de nome, e efetuar a pesquisa binaria de um nome.
#include <iostream>
using namespace :: std;
int main (){
	string nome[10], resp, pesq, x;
	int i, j, comeco,meio,Final;	
	bool acha;

	for(i=0;i<10;++i){
		cin >> nome[i];
	}

	for(i=0;i<9;++i){
		for(j=i+1;j<10;++j){
			if (nome[i] > nome[j]){
				x = nome[i];
				nome[i] = nome[j];
				nome[j] = x;
			}
		}
	}
	cout << "O vetor contem os seguintes valores: \n";
	for(i=0;i<10;++i){
                cout << nome[i] << endl;
        }


	resp = "sim";
	while (resp == "sim") {
		cout << "entre o nome a ser pesquisado: ";
		cin >> pesq;
		comeco = 1;
		Final = 10;
		acha = false;
		while (comeco <= Final && acha == false) {
			meio = ((comeco + Final)/2);
			if (pesq == nome[meio]) {
					acha = true;
					}else{
					if (pesq < nome[meio]) {
							Final = (meio - 1);
							}else{
							comeco = (meio + 1);
							}
						}
					}
				

	if (acha == true) {
	cout << pesq << " foi localizado na posição " << meio;
	}else{
	cout << pesq << " não foi localizado";
	}
	cout << "deseja continuar? ";
	cin >> resp;	
	}
}

//ler dois valores e retornar o maior valor na primeira variavel(a) e a menor na segunda (b) no final apresentar as duas
#include <iostream>
using namespace :: std;
int maiorValor(int *maior, int *menor){
	int aux;
	if(*menor > *maior){
		aux = *maior;
		*maior = *menor;
		*menor = aux;
		cout << "NOVA variavel maior: " << *maior << endl << "NOVA Variavel menor: " << *menor << endl;
	}
		return(0);
}
int main(){
	int menor,maior,aux;
	cin >> maior >> menor;
	cout << "variavel maior: " << maior << endl << "variavel menor: " << menor << endl;
	maiorValor(&maior,&menor);
}

//apresentar o resultado de graos no tabuleiro de 64 casas, obedecendo a seguinte regra, na primeira casa terá 1 grao na segunda terá o dobro sendo 2 graos na segunda casa mas tendo 3 no total, a terceira casa terá 4 graos, totalizando 7  no total. objetivo é calcular tudo e apresentar o total de graos.
#include <iostream> 
using namespace :: std;
int main () {
	long first=1, second=1,sum, house = 1;
	while (house <= 64){
		second = second*2;
		first = second + first;
		cout <<"house " << house << " "<< second << " -->> "<< first << "\n";
		house = house + 1;
	}



	cout << "total de graos " << first;
}


//converter graus celsius em fareiheint de 0 até 100 de 10 em 10 graus
#include <iostream>
using namespace :: std;
int main () {
	float C=0, F, X;

	while (C <= 100) {
		F= ((C*9/5)+32);
		cout << C << "°C = " << F << "°F \n";
		C = C + 10;
		}
}

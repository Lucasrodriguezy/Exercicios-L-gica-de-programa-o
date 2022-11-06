#include <iostream>
using namespace :: std;
int main() {
	char name, gender;
	
	cout << "digite seu nome e sexo(M ou F): ";
	cin >> name >> gender;

	if (gender ="M"){
		cout << "olá ilmo sr " << name;
	}
	if (gender = "F") {
		cout << "olá ilma srta. " << name;
	}
}

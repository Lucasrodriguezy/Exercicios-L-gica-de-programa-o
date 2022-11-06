#include<iostream>
using namespace :: std;

struct Person
{
	char name[50];
	int age;
	float salary;
};

int main(){
	Person lucas;
	cout << "escreva seu nome completo: ";
	cin.get(lucas.name,50);
	cout << "Digite sua idade: ";
	cin >> lucas.age;
	cout << "digite seu salario: ";
	cin >> lucas.salary;

	cout << "Informação." << endl;
	cout << "Nome: " << lucas.name << endl;
	cout << "idade: " << lucas.age << endl;
	cout << "salario: " << lucas.salary;
}

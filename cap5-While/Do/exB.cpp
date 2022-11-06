#include <iostream>
using namespace :: std;

int main(){
	int x,t;
        int n = 1;

        cout << "digite um numero: ";
        cin >> x;


        do{
                t = x * n;
                cout << x << " * " << n << " = " << t << "\n";
                n = n + 1;
        }while(n<=10);
}



// apresentar o somatorio de valores de 1 até 500
#include <iostream>
using namespace :: std;
int main() {
        int x=0,n=1;

        while(n <= 500){
                x = x + n;
                cout << x << " + " << n << " " ;
                n = n + 1;
        }
        cout << "=        " << x;
}



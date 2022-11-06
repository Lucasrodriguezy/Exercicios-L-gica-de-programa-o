//apresentar o total dos cem primeiros numeros 
#include <iostream>
using namespace :: std;
int main () {
        int x=0, n;
        for(n =1; n<=100; n++){
                x = x + n;
                cout << n << "+";

        }
        cout << "                " << x;
}


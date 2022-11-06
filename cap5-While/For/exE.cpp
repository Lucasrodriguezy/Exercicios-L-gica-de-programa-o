// mostrar todos os numeros impares de 0 até 20
#include <iostream>
using namespace :: std;
int main () {
        int n, x;

        for(n=0;n != 20;n++){
                x = n % 2;
                if (x != 0){
                       cout << n << " ";
                }
               
        }
}




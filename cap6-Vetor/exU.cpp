// A diferença entre esse exercicio e o exerc. U é que os valores de A deverão ser divisiveis por 2 OU 3, e B nao pode ser divisivel por 5.
#include <iostream>
using namespace :: std;
int main (){
	int A[10],B[10],C[20],Xa[10],Xb[10],rest,rest3,i;
        for (i=0;i<10;++i){
                cout << "Digite A (apenas numeros divisiveis por 2 ou 3): ";
                cin >> Xa[i];
                rest = Xa[i]%2;
                rest3 = Xa[i]%3;
                if (rest == 0 || rest3 == 0){
                        A[i] = Xa[i];
                }else{
                        A[i] = 0;
                }

        }
        for (i=0;i<10;++i){
                cout << "Digite B (apenas numeros não multiplos de 5): ";
                cin >> Xb[i];
                rest = Xb[i]%5;
                if (rest != 0){
                        B[i] = Xb[i];
                }else {
                        B[i] = 0;
                }
        }
        int k = 9;
        for(i=0;i<22;++i){
                C[i] = A[i];
                C[k] = B[i];
                k++;

        }

        for(i=0;i<22;++i){
                cout << "valores de C: " << C[i] << "   \n";

        }
}


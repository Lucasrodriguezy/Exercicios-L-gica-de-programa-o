//divisiveis por 2 OU 3
#include <iostream>
using namespace std;
int main() {

        int a,b,c,d,a2,a3,b2,b3,c2,c3,d2,d3;

        cin >> a >> b >> c >> d;
        a2 =a%2;
        a3 =a%3;
        b2 =b%2;
        b3 =b%3;
        c2 =c%2;
        c3 =c%3;
        d2 =d%2;
        d3 =d%3;

        cout << " Os numeros diviseis por 2 e 3 sao :";
        if (a2 == 0 && a3 == 0 ) {
                cout << a << "\n";
        }

        if (b2 == 0 && b3 == 0 ){
                cout << b << "\n";
        }

        if (c2 == 0 && c3 == 0){
                cout << c << "\n";
        }

        if (d2 == 0 && d3==0){
                cout << d << "\n";
        }
return 0;
}


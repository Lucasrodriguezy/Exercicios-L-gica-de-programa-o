#include <iostream>
 
using namespace std;
 
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b>c){
        cout << a << "eh o maior";
    }else{
        if(b>a>c){
            cout << b << "eh o maior"; 
        }else{
            cout << c << "eh o maior";
        }
    }
    
    return 0;
}

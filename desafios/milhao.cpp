#include <iostream>
using namespace :: std;
int main(){
        int N=0,A=0,T=0;
 		cin >> N;
		int dias=0;
        for(int i=1;i<=N;++i){
                cin >> A;
                T = T + A;
		if(T<=1000000){
			dias++;
			
				}
        }

        cout << dias;
}
		

#include <iostream>
#include <iomanip>
using namespace :: std;
int main(){
        int dias;
	float primeirovalor;
	cin >> dias;
	cin >> primeirovalor;
	float ultimovalor;
	for(int i=1;i<dias;++i){
		cin >> ultimovalor;
		}
	float total;
	total = (ultimovalor - primeirovalor)*100;
	cout << fixed << setprecision(2) << total << endl;
	
}

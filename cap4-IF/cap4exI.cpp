#include <iostream> 
using namespace std;
int main() {
int a,b,c,d,e,menor, maior;
cin >> a >> b >> c >> d >> e;
	maior = a;
	if ( maior < b) {
		maior = b;
	}
	if ( maior < c){
		maior = c;
	}
	if (maior < d){
		maior = d;
	}
	if (maior < e){
		maior = e;
	}
	
	menor = a;
	if (menor > a){
		menor = a;
	}
	if (menor > b) {
		menor = b;
	}
	if (menor > c) {
		menor = c;
	}
	if (menor > d) { 
		menor = d;
	}
	if (menor > e) {
		menor = e;
	}
	

	cout << "maior: " << maior;
	cout << "menor: " << menor; 


}

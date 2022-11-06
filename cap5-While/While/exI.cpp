// apresentar a serie fibonacci até o decimo quinto numero
#include <iostream>
using namespace :: std;
int main (){
	int n1 = 1, n2 = 1, cont=0,n3;
	while (cont <= 4){
		n3 = n1 + n2;
		cout << n1 << " " << n2 << " "<< n3 << " ";
		n1 = n2 + n3;
		n2 = n3 + n1;
		cont = cont + 1;

	}
}	

		

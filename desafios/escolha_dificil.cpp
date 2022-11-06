#include <iostream>
using namespace :: std;
int main(){
	int Ca,Ba,Pa,somaC=0,somaB=0,somaP=0;
	cin >> Ca >> Ba >> Pa;
	int Cr, Br, Pr;
	cin >> Cr >> Br >> Pr;
	if(Cr > Ca){
		somaC = Cr - Ca;
	}
	if(Br > Ba){
		somaB = Br - Ba;
	}
	if(Pr > Pa){
		somaP = Pr - Pa;
	}
	int sref = somaC + somaB + somaP;
	cout << sref;
}

#include<iostream>
using namespace :: std;
int main(){
	int Cv,Ce,Cs,Fv,Fe,Fs,Pc,Pf;
	cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;

	Pc=(3*Cv)+Ce;
	Pf=(3*Fv)+Fe;

	if(Pc==Pf){
		if(Cs==Fs){
			cout << "=";	
		}else{
			if(Cs>Fs){
                                cout << "C";
                        }else{
                                cout << "F";
                        }

		}
	}else{
		if(Pc>Pf){
			cout << "C";
		}else{
			cout << "F";
		}
	}
}
		
                



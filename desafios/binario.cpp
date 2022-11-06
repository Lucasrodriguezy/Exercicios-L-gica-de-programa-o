#include<iostream>
using namespace :: std;
int main(){
	int N,V[N],i,count=0,j;

	cin >> N;

	for(i=0;i<N;++i){
		cin >> V[i];
		
	}

	for(i=0;i<N;++i){
		for(j=0;j<=N;j=i+1){
			if(V[i]==V[j]){
			++count;
		}else{
			if(V[j]!=V[i]){
				count = 0;
			}


		}
	}
	}

	cout << count;


		

}


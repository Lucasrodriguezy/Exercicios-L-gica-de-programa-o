// entrar com um valor float e classifica-lo se tipo A(<10) B(>10 e <300) C(300>= e < 599) D(599>=)
#include <stdio.h>
int main(){
	float valor;

	scanf("%f",&valor);

	if(valor <10){
		printf("tipo A");
	}
	else
	{
		if(valor >10 && valor<300){
			printf("tipo B");
		}
		else
		{
			if(valor>=300 && valor<599){
				printf("tipo C");
			}
			else
			{
				printf("tipo D");
			}
		}
	}
}





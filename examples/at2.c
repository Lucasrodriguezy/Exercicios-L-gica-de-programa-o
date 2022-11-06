//receba tres valores e mostre se os valores sao iguais( os tres iguais), parcialmente iguais(dois de tres forem iguais) ou diferentes
#include<stdio.h>
int main(){
	int valor1,valor2,valor3;

	scanf("%i",&valor1);
	scanf("%i",&valor2);
	scanf("%i",&valor3);

	if(valor1==valor2 && valor2==valor3){
		printf("valores iguais");
	}
	else
	{
		if(valor1==valor2 || valor2==valor3 || valor1==valor3){
			printf("valores parcialmente iguais");
		}
		else
		{
			printf("valores diferentes");
		}
	}
}

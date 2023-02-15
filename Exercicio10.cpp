#include <stdio.h>

int main(){
	int num,num2,resultado;
	
	printf("Insira um numero: ");
	scanf("%d",&num);
	
	printf("Insira outro numero: ");
	scanf("%d",&num2);
	
	resultado=num/num2;
	
	printf("\nA divisao dos dois valores e de: %d\n",resultado);
	
	return 0;
}
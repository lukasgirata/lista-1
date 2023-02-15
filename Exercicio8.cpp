#include <stdio.h>

int main(){
	int num, num2, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	
	resultado = num + num2;
	
	printf("A soma dos dois numeros e de: %d", resultado);
	
	return 0;
}
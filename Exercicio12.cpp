#include <stdio.h>

int main (){
	int preco,quantidade, resultado;
	printf("Insira o preco do produto desejado: ");
	scanf("%d", &preco);
	
	printf("Insira a quantidade do produto desejado: ");
	scanf("%d", &quantidade);
	
	resultado = preco * quantidade;
	
	printf("O valor total da compra e de: %d", resultado);
	
	return 0;
}
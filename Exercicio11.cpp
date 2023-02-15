#include <stdio.h>

int main(){
	
	char nome[40];
	double salario, ano;
	
	printf("Insira seu nome: ");
	gets(nome);
	
	printf("Insira seu salario: ");
	scanf("%d", &salario);
	
	printf("Insira seu ano de nascimento: ");
	scanf("%d", &ano);

	printf("\nPerfil do usuario \n");
	printf("Nome: %s", &nome);
	printf("\nSalario: R$%d", salario);
	printf("\nData de nascimento: %d\n", ano);
	
	return 0;
}
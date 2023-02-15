#include <stdio.h>

int main() {
	float raio, area, perimetro;
	
	printf("Digite o valor do reio do circulo: ");
	scanf("%f", &raio);
	
	perimetro = raio * 3.14 * 2;
	area = raio * raio * 3.14;
	
	printf("O perimetro e de: %f\n", perimetro);
	printf("A area e de %f", area);
	
	return 0;
}
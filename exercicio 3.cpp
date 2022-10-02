#include <stdio.h>
#include <stdlib.h>

int valorlogico(int);

int main() {
	int valor;
	
	printf("Digite um valor inteiro e positivo: ");
	scanf("%i", &valor);
	
	printf("1 = Verdadeiro\n0 = Falso\n");
	printf("O valor logico e %i", valorlogico(valor));
	
	return 0;
}

int valorlogico(int v) {
	int i, divisor=0;
	
	if (v < 0)
	return -1;
	
	for (i = 2; i <= v/2; i++) {
		if (v % i == 0) {
		divisor++;
		break;
		}
	}
		if (divisor == 0)
		return 1;
		else if (divisor != 0)
		return 0;
}

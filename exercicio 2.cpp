#include <stdio.h>

float media(float, float, float, char);

int main() {
	float n1, n2, n3;
	char l;
	
	printf("Digite as 3 notas e uma letra correspondente a media: ");
	scanf("%f %f %f %c", &n1, &n2, &n3, &l);
	
	printf("A media sera: %.2f", media(n1, n2, n3, l));
	
	return 0;
}

float media(float x1, float x2, float x3, char letra) {
	float m;
	
	if(letra == 'a' || letra == 'A') {
		m = (x1 + x2 + x3)/3;
		return m;
	}
	else if (letra == 'p' || letra == 'P') {
		m = (x1*5 + x2*3 + x3*2)/10;
		return m;
	}
	else if (letra == 'h' || letra == 'H') {
		m = 3/(1/x1 + 1/x2 + 1/x3);
		return m;
	}
}
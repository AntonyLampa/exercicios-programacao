#include <stdio.h>
#include <math.h>

float somatoria(float);

int main() {
  int numero;

  printf("Digite um número inteiro e positivo: ");
  scanf("%i", &numero);


  printf("A soma é aproximadamente: %.2f", somatoria(numero));
  return 0;
}

float somatoria(float n) {
  float i, soma=0;
  
  if (n<0)
    return -1;

  for (i=1;i<=n;i++) {
    soma += (pow(i,2)+1)/(i+3);
  }
  return soma;
}

#include <stdio.h>

int divisores(int);

int main() {
  int numero;

  printf("Digite um número inteiro e positivo: ");
  scanf("%i", &numero);

  printf("O total de divisores é: %i", divisores(numero));
  
  return 0;
}

int divisores(int n) {
  int i, divisores=0;

  if (n<0)
    return -1;

  for (i=1;i<=n;i++) {
    if (n % i == 0) {
      divisores++;
    }
  }
  return divisores;
}

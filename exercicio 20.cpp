#include <stdio.h>

int somatorio(int);

int main() {
  int numero;

  printf("Digite um numero para calcular o somatorio: ");
  scanf("%i", &numero);

  printf("O somatorio e %i", somatorio(numero));
  
  return 0;
}

int somatorio(int n) {
int i, soma=0;

  if(n<0)
    return -1;
  for (i=0;i<=n;i++) {
    soma += i;
  }
  return soma;
}

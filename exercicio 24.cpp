#include <stdio.h>

int potencia(int, int);

int main() {
  int n1, n2;

  printf("Digite dois números para realizar o cálculo: ");
  scanf("%i %i", &n1, &n2);

  printf("O resultado é: %i", potencia(n1, n2));
  
  return 0;
}

int potencia(int x, int z) {
  int i, resultado=1;
  
  if (x<0 || z <0)
    return -1;

  for (i=1;i<=z;i++){
    resultado *= x;
  }
  return resultado;
}

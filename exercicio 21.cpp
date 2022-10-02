#include <stdio.h>

float soma(int);

int main() {
  int valor;

  printf("Digite um valor inteiro positivo: ");
  scanf("%i", &valor);

  printf("A soma e igual a %.2f", soma(valor));
  
  return 0;
}

float soma(int n) {
  float i, s=0;

  if (n < 0)
    return -1;

  for (i=1;i<=n;i++) {
    s += 1/i;
  }
  return s;
}

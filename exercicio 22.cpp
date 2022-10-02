#include <stdio.h>

float soma(int);

int main() {
  int valor;

  printf("Digite um valor inteiro e positivo: ");
  scanf("%i", &valor);

  printf("A soma e %.2f", soma(valor));
  
  return 0;
}

float soma(int n) {
  float i, aux=1, s=1;

  if (n < 0)
    return -1;

  for (i=1;i<=n;i++) {
    aux = i*aux;
    s += 1/aux;
  }
  return s;
}

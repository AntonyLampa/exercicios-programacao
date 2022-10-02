#include <stdio.h>

int verifica(int);

int main() {
  int valor;

  printf("Digite um valor inteiro positivo ou negativo:");
  scanf("%i", &valor);

  printf("1 = Positivo\n0 = Negativo\n");
  printf("O valor booleano é %i", verifica(valor));
  
  return 0;
}

int verifica(int v) {

  if (v < 0)
    return 0;
  else 
    return 1;
}

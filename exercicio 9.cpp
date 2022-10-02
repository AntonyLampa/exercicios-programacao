#include <stdio.h>

int verifica(int);

int main() {
  int valor;
  
  printf("Digite um valor inteiro: ");
  scanf("%i", &valor);
  
  printf("1 = Par\n0 = Ímpar\n");
  printf("O valor booleano é %i", verifica(valor));
    
  return 0;
}

int verifica(int v) {
  if (v % 2 == 0)
    return 1;
  else
    return 0;
}

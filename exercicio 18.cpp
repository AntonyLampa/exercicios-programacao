#include <stdio.h>

int taboada(int);

int main() {
  int numero, i;

  printf("Digite um número para fazer sua taboada: ");
  scanf("%i", &numero);
  
  taboada(numero);
  
  return 0;
}

int taboada(int n) {
  int i;
  
  for(i=1;i<=n;i++) {
    printf("%3i x %3i = %3i\n", i, n, i*n);
  }
}

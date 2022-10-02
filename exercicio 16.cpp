#include <stdio.h>

int fatorial(int);

int main() {
int numero;
  
  printf("Digite um numero para calcular o fatorial: ");
  scanf("%i", &numero);

printf("O fatorial e %i", fatorial(numero));
  
  return 0;
}

int fatorial(int n) {
int resultado = 1, i;

  for (i=n;i>0;i--){
  resultado = i*resultado;
    }
  return resultado;
}

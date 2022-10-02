#include <stdio.h>

int verifica(int);

int main() {
 int numero;

  printf("Digite um numero para saber se ele é perfeito ou nao: ");
  scanf("%i", &numero);
  
printf("1 = Verdadeiro\n0 = Falso\n");
printf("O valor booleano e %i", verifica(numero));
  
  return 0;
}

int verifica(int n) {
int divisor, i, soma = 0;

  for (i=1;i<= n/2;i++) {
    if (n % i == 0)
      soma += i;
  }
  if (soma == n)
    return 1;
  else  
    return 0;
}

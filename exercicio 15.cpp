#include <stdio.h>

float media();

int main() {
  float resultado;

  resultado = media();
  
  printf("A media e igual a %.2f", resultado);
  
  return 0;
}

float media() {
  float soma=0, i=0, num=1, med;

  while (num != 0) {
    printf("Digite um numero positivo: ");
    scanf("%f", &num);

  if (num < 0)
    return -1;

  soma += num;
  i++;
  }
  med = soma/(i - 1);
  
  return med;
}

#include <stdio.h>

int converte_dias(int, int, int);

int main() {
  int anos, meses, dias;

  printf("Digite sua idade em anos, meses e dias: ");
  scanf("%i %i %i", &anos, &meses, &dias);

printf("Voce viveu %i dias", converte_dias(anos, meses, dias));

  return 0;
  }

int converte_dias(int a, int m, int d) {
  return a*365 + m*30 + d;
}

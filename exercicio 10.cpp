#include <stdio.h>

float peso_ideal(float, char);

int main() {
  float altura;
  char sexo;

  printf("M ou m para homem e F ou f para mulher\n");
  printf("Digite sua altura em metros e seu genero: ");
  scanf("%f %c", &altura, &sexo);

  printf("Seu peso ideal e %.2f", peso_ideal(altura, sexo));

  return 0;
}

float peso_ideal(float alt, char sex) {
  float peso;

  if (sex == 'M' || sex == 'm') {
    peso = 72.7 * alt - 58;
    return peso;
  } else {
    peso = 62.1 * alt - 44.7;
    return peso;
  }
}

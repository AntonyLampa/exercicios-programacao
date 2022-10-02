#include <stdio.h>
#include <stdlib.h>

int converte_horas(int);
int converte_minutos(int);
int segundos_restantes(int);

int main() {
int tempo;
  
  printf("Digite o tempo em segundos: ");
  scanf("%i", &tempo);

  printf("O tempo foi de %ih:%imin:%is", converte_horas(tempo), converte_minutos(tempo), segundos_restantes(tempo));
  
  return 0;
}

int converte_horas(int s) {
  int horas;
  
  horas = s / 3600;
  return horas;
}

int converte_minutos(int s) {
  int minutos, resto;

  resto = s % 3600;
  minutos = resto / 60;
  return minutos;
}

int segundos_restantes(int s) {
  int segundos, resto;

  resto = s % 3600;
  segundos = resto % 60;
  return segundos;
}

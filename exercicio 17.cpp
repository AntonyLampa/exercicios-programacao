#include <stdio.h>
#include <time.h>

int calc_maior();
int calc_menor();

int main() {
  int i, vetor[50];

  srand(time(NULL));
for (i=0;i<50;i++) {
  vetor[i] = rand() % 100;
}
  for (i=0;i<50;i++){
    printf("%i\n", vetor[i]);
  }
    printf("\nO maior é %i e o menor é %i", calc_maior(vetor, 50), calc_menor(vetor ,50));
  
  return 0;
}

int calc_maior(int vetor[]) {
  int i, maior;

  maior=vetor[0];
  
  for (i=1;i<50;i++) {
    if (vetor[i] > maior) {
maior=vetor[i];
}
  }
return maior;
}

int calc_menor(int vetor[]) {
  int i, menor;

  menor=vetor[0];
  
  for (i=1;i<50;i++) {
    if (vetor[i]< menor) {
menor=vetor[i];
}
  }
return menor;
}

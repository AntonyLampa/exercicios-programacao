#include <stdio.h>

int verifica_maior(int, int, int);
int verifica_medio(int, int, int);
int verifica_menor(int, int, int);

int main() {
  int a, b, c;

  printf("Digite 3 valores para serem testados: ");
  scanf("%i %i %i", &a, &b, &c);

  printf("%i < %i < %i", verifica_menor(a, b, c), verifica_medio(a, b, c), verifica_maior(a, b, c));
  
  return 0;
}

int verifica_maior(int n1, int n2, int n3){
if (n1 > n2 && n1 > n3)
  return n1;
else if (n2 > n1 && n2 > n3)
  return n2;
else if (n3 > n1 && n3 > n2)
  return n3;
}

int verifica_menor(int n1, int n2, int n3){
if (n1 < n2 && n1 < n3)
  return n1;
else if (n2 < n1 && n2 < n3)
  return n2;
else if (n3 < n1 && n3 < n2)
  return n3;
}

int verifica_medio(int n1, int n2, int n3){
if (n1 > n2 && n1 < n3)
  return n1;
else if (n2 > n1 && n2 < n3)
  return n2;
else if (n3 > n1 && n3 < n2 )
  return n3;
}

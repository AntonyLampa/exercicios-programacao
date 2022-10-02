#include <stdio.h>
#include <math.h>

float baskara1(float, float, float);
float baskara2(float, float, float);

int main() {
    float a, b, c;
    
    printf("Digite 3 valores pare a, b e c para calcular as raizes: ");
    scanf("%f %f %f", &a, &b, &c);
    
    printf("As raizes serao\nx1 = %.2f\nx2 = %.2f\n", baskara1(a, b, c), baskara2(a, b, c));
    
    return 0;
}

float baskara1(float A, float B, float C) {
    float x1;

    
        float delta = pow(B,2) - 4*A*C;
        if (delta < 0){
            printf("erro: delta negativo\n");
        } else {
            x1 = (-B + sqrt(delta))/(2*A);
        }
  
    return x1;
}

float baskara2(float A, float B, float C) {
    float x2;
    
        float delta = (pow(B,2) - 4*A*C);
        if (delta < 0){
            printf("erro: delta negativo\n");
        } else {
            x2 = (-B - sqrt(delta))/(2*A);
        }
  
    return x2;
}

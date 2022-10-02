#include<stdio.h>
#include<stdlib.h>

int triangulo(int a, int b, int c){

    if(a<(b+c) && b<(a+c) && c<(b+a)){
        if(a==b && a==c){
            return 1;
        }
        else if(a==b || a==c || b==c){
            return 2;
        }
        else if(a!=b && a!=c && b!=c){
            return 3;
        }
    }
    else{
        return 5;
    }

}

int main(){
    int lado1,lado2,lado3,tipo;

    printf("Informe 3 numeros para o triangulo: ");
    scanf("%i %i %i", &lado1, &lado2, &lado3 );

    tipo = triangulo(lado1,lado2,lado3);

    if(tipo>3){
        printf("Nao se pode fazer triangulo com os numeros");
    }
    if(tipo==1){
        printf("Triangulo Equilatero");
    }
    else{
        printf((tipo==2)?"Triangulo Isosceles":"Triangulo Escaleno");
    }


    return 0;
}

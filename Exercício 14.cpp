#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct dados
{
    float medsal;
    float medfil;
    float Msal;
    float porcent;

} dadost;

struct dados funcao(int n)
{
    float salario = 0, salariot, cont = 0, aux = 0, filhos=0, filhost;
    int i = 0;
    struct dados dadost;

    while (i < n)
    {

        salario = 0;
        filhos = 0;
        printf("digite o salario da %i° pessoa: \n", i + 1);
        scanf("%f", &salario);
        printf("digite a quantidade de filhos da %i° pessoa: \n", i + 1);
        scanf("%f", &filhos);
        if (salario > aux)
        {
            aux = salario;
        }
        salariot += salario;
        filhost += filhos;
        if (salario <= 350)
        {
            cont++;
        }

        i++;
    }
    dadost.medsal = salariot / n;
    dadost.medfil = filhost / n;
    dadost.Msal = aux;
    dadost.porcent = (cont / n) * 100;

    return dadost;
}

int main()
{
    int n;
    struct dados dadost;
    printf("determine o numero de pessoas: \n");
    scanf("%i", &n);
    dadost = funcao(n);

    printf("media salarios:%.2f \n", dadost.medsal);
    printf("media filhos:%.2f \n", dadost.medfil);
    printf("maior salario:%.2f \n", dadost.Msal);
    printf("porcentagem:%.f% \n", dadost.porcent);

    return 0;
}

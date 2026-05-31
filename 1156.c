#include <stdio.h>

int main()
{

    int p, cont;
    float soma;
    cont = 1;
    p = 1;
    soma = 0;

    while (p <= 39)
    {
        soma = soma + (float)p / cont;
        cont = cont * 2;
        p = p + 2;
    }

    printf("%.2f\n", soma);
    return 0;
}

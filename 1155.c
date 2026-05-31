#include <stdio.h>

int main()
{

    float soma;
    int s;
    s = 100;
    soma = 0;

    for (int cont = 1; cont <= s; cont = cont + 1)
    {

        soma = soma + (float)1 / cont;
    }

    printf("%.2f\n", soma);

    return 0;
}
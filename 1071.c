#include <stdio.h>

int main()
{

    int x, y, menor, maior, soma;
    scanf("%d %d", &x, &y);
    soma = 0;

    if (x > y)
    {
        maior = x;
        menor = y;
    }
    else
    {
        maior = y;
        menor = x;
    }

    menor = menor + 1;

    while (menor < maior)
    {
        if (menor % 2 != 0)
        {
            soma = soma + menor;
        }
        menor = menor + 1;
    }

    printf("%d\n", soma);

    return 0;
}
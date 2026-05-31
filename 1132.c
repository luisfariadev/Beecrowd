#include <stdio.h>

int main()
{

    int x, y, soma, n, menor;
    soma = 0;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        n = x - y;
        menor = y;
    }
    else
    {
        n = y - x;
        menor = x;
    }

    for (int cont = 0; cont <= n; cont = cont + 1)
    {
        if (menor % 13 != 0)
        {
            soma = soma + menor;
        }

        menor = menor + 1;
    }

    printf("%d\n", soma);

    return 0;
}
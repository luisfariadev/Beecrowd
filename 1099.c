#include <stdio.h>

int main()
{

    int n, x, y, maior, menor, soma;
    scanf("%d", &n);
    soma = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

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

        for (int p = menor + 1; p < maior; p = p + 1)
        {
            if (p % 2 != 0)
            {
                soma = soma + p;
            }
        }

        printf("%d\n", soma);

        soma = 0;
    }

    return 0;
}
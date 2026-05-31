#include <stdio.h>

int main()
{

    int n, x, y, soma;
    scanf("%d", &n);
    soma = 0;

    for (int cont = 0; cont < n; cont = cont + 1)
    {
        scanf("%d %d", &x, &y);

        if (x % 2 == 0)
        {
            x = x + 1;
        }

        for (int i = 0; i < y; i = i + 1)
        {
            soma = soma + x;
            x = x + 2;
        }

        printf("%d\n", soma);
        soma = 0;
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int x, soma;
    soma = 0;

    while (1)
    {
        scanf("%d", &x);

        if (x != 0)
        {
            if (x % 2 != 0)
            {
                x = x + 1;
            }

            for (int cont = 0; cont < 5; cont = cont + 1)
            {
                soma = soma + x;
                x = x + 2;
            }

            printf("%d\n", soma);
            soma = 0;
        }
        else
        {
            break;
        }
    }

    return 0;
}
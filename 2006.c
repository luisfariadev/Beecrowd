#include <stdio.h>

int main()
{

    int r, t, soma;
    scanf("%d", &t);
    soma = 0;

    for (int cont = 0; cont < 5; cont = cont + 1)
    {
        scanf("%d", &r);

        if (r == t)
        {
            soma = soma + 1;
        }
    }

    printf("%d\n", soma);

    return 0;
}
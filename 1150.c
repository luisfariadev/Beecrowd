#include <stdio.h>

int main()
{
    int x, z, soma;
    scanf("%d", &x);
    soma = 0;

    do
    {
        scanf("%d", &z);
    } while (z <= x);

    for (int i = 1; i <= z; i++)
    {
        soma = soma + x;

        if (soma > z)
        {
            printf("%d\n", i);
            break;
        }
        x = x + 1;
    }

    return 0;
}
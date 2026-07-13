#include <stdio.h>

void printar(int p)
{
    if (p == 1)
    {
        printf("Dasher\n");
    }
    else if (p == 2)
    {
        printf("Dancer\n");
    }
    else if (p == 3)
    {
        printf("Prancer\n");
    }
    else if (p == 4)
    {
        printf("Vixen\n");
    }
    else if (p == 5)
    {
        printf("Comet\n");
    }
    else if (p == 6)
    {
        printf("Cupid\n");
    }
    else if (p == 7)
    {
        printf("Donner\n");
    }
    else if (p == 8)
    {
        printf("Blitzen\n");
    }
    else if (p == 9)
    {
        printf("Rudolph\n");
    }
}

int main()
{
    int p = 1;
    int n;
    int soma = 0;

    for (int i = 1; i <= 9; i++)
    {
        scanf("%d", &n);
        soma = soma + n;
    }

    while (soma != 0)
    {
        soma = soma - 1;

        if (soma > 0)
        {
            p++;
            if (p == 10)
            {
                p = 1;
            }
        }
    }

    printar(p);

    return 0;
}
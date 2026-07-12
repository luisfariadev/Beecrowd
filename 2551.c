#include <stdio.h>

void conta(int n)
{
    int p;
    float maior;
    float vel;
    int temp;
    int dis;

    p = 0;
    maior = 0;
    int posicao[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &temp, &dis);
        vel = dis * 1.0 / temp;

        if (i == 0)
        {
            maior = vel;
        }

        if (vel > maior)
        {
            maior = vel;
            posicao[p] = i;
            p++;
        }
    }

    printf("1\n");

    for (int i = 0; i < p; i++)
    {
        printf("%d\n", posicao[i] + 1);
    }
}

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        conta(n);
    }

    return 0;
}
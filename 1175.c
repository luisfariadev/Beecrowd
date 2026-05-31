#include <stdio.h>

int main()
{

    int n[20], posicao;
    posicao = 20;

    for (int i = 0; i < 20; i = i + 1)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 20; i = i + 1)
    {
        posicao = posicao - 1;
        printf("N[%d] = %d\n", i, n[posicao]);
    }

    return 0;
}
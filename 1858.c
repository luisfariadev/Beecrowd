#include <stdio.h>

int main()
{

    int n, menor, i, valor;
    scanf("%d", &n);
    int posicao[n + 1];
    scanf("%d", &posicao[1]);
    menor = posicao[1];
    valor = 1;

    for (int i = 2; i <= n; i++)
    {
        scanf("%d", &posicao[i]);

        if (posicao[i] < menor)
        {
            menor = posicao[i];
            valor = i;
        }
    }

    printf("%d\n", valor);

    return 0;
}
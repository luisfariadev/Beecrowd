#include <stdio.h>

int main()
{
    char caractere;
    scanf("%c", &caractere);
    float matriz[12][12];
    int p = 1;
    int quantidade = 0;
    float soma = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 11; i++)
    {
        for (int j = p; j < 12; j++)
        {
            soma = soma + matriz[i][j];
            quantidade = quantidade + 1;
        }
        p = p + 1;
    }

    if (caractere == 'M')
    {
        soma = soma / quantidade;
    }

    printf("%.1f\n", soma);

    return 0;
}
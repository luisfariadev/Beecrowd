#include <stdio.h>

int main()
{

    int l;
    char caractere;
    float matriz[12][12];
    scanf("%d %c", &l, &caractere);
    float soma = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 12; i++)
    {
        soma = soma + matriz[l][i];
    }

    if (caractere == 'M')
    {
        soma = soma / 12;
    }

    printf("%.1f\n", soma);

    return 0;
}
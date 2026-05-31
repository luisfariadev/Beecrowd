#include <stdio.h>

int main()
{
    int c;
    char caractere;
    scanf("%d %c", &c, &caractere);
    float matriz[12][12];
    float soma = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &matriz[i][j]);

            if (j == c)
            {
                soma = soma + matriz[i][j];
            }
        }
    }

    if (caractere == 'M')
    {
        soma = soma / 12;
    }

    printf("%.1f\n", soma);

    return 0;
}
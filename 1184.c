#include <stdio.h>

int main()
{
    char caractere;
    int cont;
    float soma;
    float matriz[12][12];
    scanf("%c", &caractere);
    soma = 0;
    cont = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &matriz[i][j]);

            if (i > j)
            {
                soma = soma + matriz[i][j];
                cont = cont + 1;
            }
        }
    }

    if (caractere == 'M')
    {
        soma = soma / cont;
    }

    printf("%.1f\n", soma);

    return 0;
}
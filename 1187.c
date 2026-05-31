#include <stdio.h>

int main()
{

    char caractere;
    scanf("%c", &caractere);
    double matriz[12][12];
    double soma = 0;
    int cont = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &matriz[i][j]);

            if (i < j && i + j < 11)
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

    printf("%.1lf\n", soma);

    return 0;
}

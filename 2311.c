#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    float nivel;
    float nota[7];
    float notafinal;

} Pessoa;

int main()
{
    float soma;
    float maior, menor;
    int n;
    scanf("%d", &n);
    getchar();

    Pessoa pessoa[n];

    for (int i = 0; i < n; i++)
    {
        soma = 0;
        fgets(pessoa[i].nome, 50, stdin);
        pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';

        scanf("%f", &pessoa[i].nivel);
        getchar();

        for (int j = 0; j < 7; j++)
        {
            scanf("%f", &pessoa[i].nota[j]);
            soma = soma + pessoa[i].nota[j];

            if (j == 0)
            {
                maior = pessoa[i].nota[j];
                menor = pessoa[i].nota[j];
            }
            else
            {
                if (pessoa[i].nota[j] > maior)
                {
                    maior = pessoa[i].nota[j];
                }
                else if (pessoa[i].nota[j] < menor)
                {
                    menor = pessoa[i].nota[j];
                }
            }
        }

        getchar();
        soma = soma - maior - menor;
        soma = soma * pessoa[i].nivel;
        pessoa[i].notafinal = soma;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s ", pessoa[i].nome);
        printf("%.2f\n", pessoa[i].notafinal);
    }

    return 0;
}
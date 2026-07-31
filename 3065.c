#include <stdio.h>

int main()
{
    int n;
    int teste = 1;

    while (scanf("%d", &n) == 1 && n != 0)
    {

        int soma = 0;
        int numero;
        char c;

        scanf("%d", &numero);
        soma = numero;

        for (int i = 0; i < n - 1; i++)
        {
            scanf(" %c", &c);
            scanf("%d", &numero);

            if (c == '+')
            {
                soma = soma + numero;
            }
            else if (c == '-')
            {
                soma = soma - numero;
            }
        }

        printf("Teste %d\n", teste);
        teste++;
        printf("%d\n", soma);

        printf("\n");
    }

    return 0;
}
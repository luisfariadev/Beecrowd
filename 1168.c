#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    char numero[120];

    for (int i = 0; i < n; i++)
    {
        int soma = 0;
        fgets(numero, 102, stdin);
        int tam = strcspn(numero, "\n");

        for (int j = 0; j < tam; j++)
        {
            if (numero[j] == '1')
            {
                soma = soma + 2;
            }
            else if (numero[j] == '2')
            {
                soma = soma + 5;
            }
            else if (numero[j] == '3')
            {
                soma = soma + 5;
            }
            else if (numero[j] == '4')
            {
                soma = soma + 4;
            }
            else if (numero[j] == '5')
            {
                soma = soma + 5;
            }
            else if (numero[j] == '6')
            {
                soma = soma + 6;
            }
            else if (numero[j] == '7')
            {
                soma = soma + 3;
            }
            else if (numero[j] == '8')
            {
                soma = soma + 7;
            }
            else if (numero[j] == '9')
            {
                soma = soma + 6;
            }
            else
            {
                soma = soma + 6;
            }
        }

        printf("%d leds\n", soma);
    }

    return 0;
}
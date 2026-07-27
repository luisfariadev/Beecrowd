#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char cond;
    int valor;
    int soma1 = 0;
    int soma2 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf(" %c %d", &cond, &valor);

        if (cond == 'G')
        {
            soma1 = soma1 + valor;
        }
        else
        {
            soma2 = soma2 + valor;
        }
    }

    if (soma2 >= soma1)
    {
        printf("A greve vai parar.\n");
    }
    else
    {
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    }

    return 0;
}
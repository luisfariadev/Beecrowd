#include <stdio.h>
#include <string.h>

int calculo(int quant, char fruta[])
{
    int v;
    int soma;

    if (strcmp(fruta, "suco de laranja") == 0)
    {
        v = 120;
        soma = quant * v;
    }
    else if (strcmp(fruta, "morango fresco") == 0)
    {
        v = 85;
        soma = quant * v;
    }
    else if (strcmp(fruta, "mamao") == 0)
    {
        v = 85;
        soma = quant * v;
    }
    else if (strcmp(fruta, "goiaba vermelha") == 0)
    {
        v = 70;
        soma = quant * v;
    }
    else if (strcmp(fruta, "manga") == 0)
    {
        v = 56;
        soma = quant * v;
    }
    else if (strcmp(fruta, "laranja") == 0)
    {
        v = 50;
        soma = quant * v;
    }
    else
    {
        v = 34;
        soma = quant * v;
    }

    return soma;
}

int main()
{

    int valor;
    int teste;
    int quant;
    char fruta[30];

    while (scanf("%d", &teste) == 1 && teste != 0)
    {
        valor = 0;
        getchar();

        for (int i = 0; i < teste; i++)
        {
            scanf("%d", &quant);
            getchar();
            fgets(fruta, 30, stdin);
            fruta[strcspn(fruta, "\n")] = '\0';
            valor = valor + calculo(quant, fruta);
        }

        if (valor < 110)
        {
            printf("Mais %d mg\n", 110 - valor);
        }
        else if (valor > 130)
        {
            printf("Menos %d mg\n", valor - 130);
        }
        else
        {
            printf("%d mg\n", valor);
        }
    }

    return 0;
}
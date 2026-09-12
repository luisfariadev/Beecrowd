#include <stdio.h>

int main()
{
    char cpf[15];

    while (scanf("%s", cpf) != EOF)
    {
        int p1 = 1;
        int p2 = 9;
        int dig1 = 0;
        int dig2 = 0;

        for (int i = 0; i <= 10; i++)
        {
            if (cpf[i] == '.')
            {
                continue;
            }

            int numero = cpf[i] - '0';
            dig1 = dig1 + numero * p1;
            dig2 = dig2 + numero * p2;
            p1++;
            p2--;
        }

        dig1 = dig1 % 11;
        dig2 = dig2 % 11;

        if (dig1 == 10)
        {
            dig1 = 0;
        }

        if (dig2 == 10)
        {
            dig2 = 0;
        }

        if (cpf[12] - '0' == dig1 && cpf[13] - '0' == dig2)
        {
            printf("CPF valido\n");
        }
        else
        {
            printf("CPF invalido\n");
        }
    }

    return 0;
}
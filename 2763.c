#include <stdio.h>

int main()
{
    char cpf[20];

    while (fgets(cpf, 17, stdin) != NULL)
    {
        int cont = 0;

        for (int i = 0; i < 14; i++)
        {
            if (cpf[i] != '.' && cpf[i] != '-')
            {

                printf("%c", cpf[i]);
                cont++;

                if (cont == 3)
                {
                    cont = 0;
                    printf("\n");
                }
            }
        }

        printf("\n");
    }

    return 0;
}
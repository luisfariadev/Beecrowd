#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palavra[1000];

    while (fgets(palavra, sizeof(palavra), stdin) != NULL)
    {
        palavra[strcspn(palavra, "\n")] = '\0';
        int tam = strlen(palavra);

        int controle = 1;
        int minuscula = 0;
        int maiuscula = 0;
        int numero = 0;

        if (tam < 6 || tam > 32)
        {
            controle = 0;
        }
        else
        {
            for (int i = 0; i < tam; i++)
            {
                if (isupper(palavra[i]))
                {
                    maiuscula = 1;
                }
                else if (islower(palavra[i]))
                {
                    minuscula = 1;
                }
                else if (isdigit(palavra[i]))
                {
                    numero = 1;
                }
                else
                {
                    controle = 0;
                    break;
                }
            }
        }

        if (minuscula == 1 && maiuscula == 1 && numero == 1 && controle == 1)
        {
            printf("Senha valida.\n");
        }
        else
        {
            printf("Senha invalida.\n");
        }
    }

    return 0;
}
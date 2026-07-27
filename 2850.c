#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[15];

    while (fgets(palavra, 10, stdin) != NULL)
    {
        palavra[strcspn(palavra, "\n")] = '\0';

        if (strcmp(palavra, "esquerda") == 0)
        {
            printf("ingles\n");
        }
        else if (strcmp(palavra, "direita") == 0)
        {
            printf("frances\n");
        }
        else if (strcmp(palavra, "nenhuma") == 0)
        {
            printf("portugues\n");
        }
        else if (strcmp(palavra, "as duas") == 0)
        {
            printf("caiu\n");
        }
    }

    return 0;
}
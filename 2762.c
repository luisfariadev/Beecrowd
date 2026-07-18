#include <stdio.h>
#include <string.h>

int main()
{
    char numero[20];

    while (fgets(numero, 11, stdin) != NULL)
    {
        int z = 1;
        int p = strcspn(numero, "\n");
        int p2 = strcspn(numero, ".");

        for (int i = p2 + 1; i < p; i++)
        {
            if (numero[i] == '0' && z == 1)
            {
            }
            else
            {
                printf("%c", numero[i]);
                z = 0;
            }
        }

        printf(".");

        for (int i = 0; i < p2; i++)
        {
            printf("%c", numero[i]);
        }

        printf("\n");
    }

    return 0;
}
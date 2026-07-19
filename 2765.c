#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];

    while (fgets(frase, 999, stdin) != NULL)
    {
        int p = strcspn(frase, "\n");

        for (int i = 0; i < p; i++)
        {
            if (frase[i] == ',')
            {
                printf("\n");
            }
            else
            {
                printf("%c", frase[i]);
            }
        }

        printf("\n");
    }

    return 0;
}
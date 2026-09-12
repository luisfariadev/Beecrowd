#include <stdio.h>
#include <string.h>

int main()
{
    char carac[] = "`1234567890-=QWERTYUIOP[]\\ASDFFGHJKL;'ZXCVBNM,./";
    char frase[300];
    char *p;

    while (fgets(frase, 300, stdin) != NULL)
    {
        for (int i = 0; i < strcspn(frase, "\n"); i++)
        {
            if (frase[i] == ' ')
            {
                continue;
            }
            else
            {
                p = strchr(carac, frase[i]);
                p--;
                frase[i] = *p;
            }
        }

        printf("%s", frase);
    }

    return 0;
}
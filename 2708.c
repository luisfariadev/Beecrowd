#include <stdio.h>
#include <string.h>

int main()
{
    char estado[10];
    int pessoa = 0;
    int jipe = 0;
    int p;

    while (1)
    {

        scanf("%s", estado);

        if (strcmp(estado, "ABEND") == 0)
        {
            break;
        }
        else
        {
            scanf("%d", &p);
            if (strcmp(estado, "SALIDA") == 0)
            {
                jipe = jipe + 1;
                pessoa = pessoa + p;
            }
            else if (strcmp(estado, "VUELTA") == 0)
            {
                jipe = jipe - 1;
                pessoa = pessoa - p;
            }
        }
    }

    printf("%d\n%d\n", pessoa, jipe);

    return 0;
}
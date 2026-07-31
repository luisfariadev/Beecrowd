#include <stdio.h>
#include <string.h>

int main()
{
    char jon[1005];
    char medico[1005];
    scanf("%s %s", jon, medico);

    if (strlen(jon) < strlen(medico))
    {
        printf("no\n");
    }
    else
    {
        printf("go\n");
    }

    return 0;
}
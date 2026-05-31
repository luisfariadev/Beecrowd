#include <stdio.h>
#include <string.h>

int main()
{

    int c, forca;
    char nome[10];
    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        scanf("%s %d", &nome, &forca);

        if (strcmp(nome, "Thor") == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}
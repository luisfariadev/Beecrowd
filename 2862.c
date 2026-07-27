#include <stdio.h>

int main()
{
    int c, p;
    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        scanf("%d", &p);

        if (p > 8000)
        {
            printf("Mais de 8000!\n");
        }
        else
        {
            printf("Inseto!\n");
        }
    }

    return 0;
}
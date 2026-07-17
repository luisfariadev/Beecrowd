#include <stdio.h>
#include <string.h>

int main()
{
    int cont = 0;
    char bin[105];
    fgets(bin, 101, stdin);
    int p = strcspn(bin, "\n");

    for (int i = 0; i < p; i++)
    {
        if (bin[i] == '1')
        {
            cont = cont + 1;
        }
    }

    bin[p] = '\0';

    if (cont % 2 == 0)
    {
        printf("%s0\n", bin);
    }
    else
    {
        printf("%s1\n", bin);
    }

    return 0;
}
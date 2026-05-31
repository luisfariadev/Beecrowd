#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int anos;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &anos);

        anos = 2015 - anos;

        if (anos <= 0)
        {
            anos = abs(anos);
            printf("%d A.C.\n", anos + 1);
        }
        else
        {
            printf("%d D.C.\n", anos);
        }
    }

    return 0;
}
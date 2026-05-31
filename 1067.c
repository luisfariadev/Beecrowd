#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);

    for (int cont = 0; cont <= x; cont = cont + 1)
    {
        if (cont % 2 != 0)
        {
            printf("%d\n", cont);
        }
    }

    return 0;
}
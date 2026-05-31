#include <stdio.h>

int main()
{

    int n, p;
    scanf("%d", &n);

    for (int cont = 1; cont <= n; cont = cont + 1)
    {
        if (cont % 2 == 0)
        {
            p = cont * cont;
            printf("%d^2 = %d\n", cont, p);
        }
    }

    return 0;
}
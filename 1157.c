#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int cont = 1; cont <= n; cont = cont + 1)
    {
        if (n % cont == 0)
        {
            printf("%d\n", cont);
        }
    }

    return 0;
}
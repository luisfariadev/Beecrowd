#include <stdio.h>

int main()
{

    int n, f;
    scanf("%d", &n);
    f = 1;

    for (int cont = 1; cont <= n; cont = cont + 1)
    {
        f = f * cont;
    }

    printf("%d\n", f);

    return 0;
}
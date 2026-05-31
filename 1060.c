#include <stdio.h>

int main()
{
    double n;
    int valores = 0;

    for (int cont = 1; cont <= 6; cont = cont + 1)
    {
        scanf("%lf", &n);

        if (n > 0)
        {
            valores = valores + 1;
        }
    }

    printf("%d valores positivos\n", valores);

    return 0;
}
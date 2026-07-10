#include <stdio.h>

int main()
{
    double resul = 2.0;
    int n;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("1.0000000000\n");
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            resul = 2.0 + 1.0 / resul;
        }
    }

    resul = 1 + 1.0 / resul;
    printf("%.10lf", resul);

    return 0;
}
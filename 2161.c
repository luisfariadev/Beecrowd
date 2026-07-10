#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double resul = 6.0;

    if (n == 0)
    {
        printf("3.0000000000\n");
        return 0;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            resul = 6.0 + 1.0 / resul;
        }

        resul = 3 + 1.0 / resul;
        printf("%.10lf\n", resul);
    }

    return 0;
}
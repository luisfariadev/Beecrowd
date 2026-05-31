#include <stdio.h>

int main()
{

    int n, a, b;
    float q;
    scanf("%d %d %d", &n, &a, &b);

    for (int cont = 0; cont < n; cont = cont + 1)
    {
        if (b == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            q = (float)a / b;
            printf("%.1f\n", q);
        }

        scanf("%d %d", &a, &b);
    }

    return 0;
}
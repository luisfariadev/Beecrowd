#include <stdio.h>

int main()
{

    float a[100];

    for (int cont = 0; cont < 100; cont = cont + 1)
    {
        scanf("%f", &a[cont]);

        if (a[cont] <= 10)
        {

            printf("A[%d] = %.1f\n", cont, a[cont]);
        }
    }

    return 0;
}
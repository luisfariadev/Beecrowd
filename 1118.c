#include <stdio.h>

int main()
{

    float a, b, m;
    int repetir;
    repetir = 1;

    while (repetir == 1)
    {
        scanf("%f", &a);
        while (a < 0 || a > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &a);
        }
        scanf("%f", &b);
        while (b < 0 || b > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &b);
        }

        m = (a + b) / 2;
        printf("media = %.2f\n", m);

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &repetir);

        while (repetir != 1 && repetir != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &repetir);
        }

        if (repetir == 2)
        {
            break;
        }
    }

    return 0;
}
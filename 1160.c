#include <stdio.h>

int main()
{

    int t, cont;
    float pa, pb;
    float g1, g2;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%f %f %f %f", &pa, &pb, &g1, &g2);
        cont = 1;
        g1 = g1 / 100;
        g2 = g2 / 100;

        while (1)
        {

            pa = pa * (1 + g1);
            pa = (int)pa;
            pb = pb * (1 + g2);
            pb = (int)pb;

            if (pa > pb)
            {
                printf("%d anos.\n", cont);
                break;
            }

            cont = cont + 1;

            if (cont > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
    }

    return 0;
}
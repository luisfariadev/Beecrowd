#include <stdio.h>

int main()
{

    int t, b, A1, D1, L1, A2, D2, L2, bonus1, bonus2;
    double valor1, valor2;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        bonus1 = 0;
        bonus2 = 0;

        scanf("%d", &b);
        scanf("%d %d %d", &A1, &D1, &L1);
        scanf("%d %d %d", &A2, &D2, &L2);

        if (L1 % 2 == 0)
        {
            bonus1 = b;
        }

        if (L2 % 2 == 0)
        {
            bonus2 = b;
        }

        valor1 = ((A1 + D1) / 2.0) + bonus1;
        valor2 = ((A2 + D2) / 2.0) + bonus2;

        if (valor1 > valor2)
        {
            printf("Dabriel\n");
        }
        else if (valor2 > valor1)
        {
            printf("Guarte\n");
        }
        else
        {
            printf("Empate\n");
        }
    }

    return 0;
}
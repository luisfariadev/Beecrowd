#include <stdio.h>

int main()
{

    int t, pedidos, pessoas;

    while (1)
    {
        scanf("%d", &t);

        if (t == 0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < t; i++)
            {
                scanf("%d", &pessoas);

                if (pessoas % 2 != 0)
                {
                    pedidos = (pessoas - 1) * 2 + 1;
                    printf("%d\n", pedidos);
                }
                else
                {
                    pedidos = (pessoas - 2) * 2 + 2;
                    printf("%d\n", pedidos);
                }
            }
        }

        pedidos = 0;
    }

    return 0;
}
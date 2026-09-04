#include <stdio.h>
#define r(x, y) (9 * x * x) + (y * y)
#define b(x, y) (2 * x * x) + (25 * y * y)
#define c(x, y) (-100 * x) + (y * y * y)

int main()
{
    int x;
    int y;
    int rafael;
    int beto;
    int carlos;
    int quant;
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++)
    {
        scanf("%d %d", &x, &y);
        rafael = r(x, y);
        beto = b(x, y);
        carlos = c(x, y);

        if (rafael > beto && rafael > carlos)
        {
            printf("Rafael ganhou\n");
        }
        else if (beto > rafael && beto > carlos)
        {
            printf("Beto ganhou\n");
        }
        else
        {
            printf("Carlos ganhou\n");
        }
    }

    return 0;
}
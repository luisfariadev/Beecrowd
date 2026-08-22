#include <stdio.h>

int main()
{
    int teste = 0;
    int cont;
    int met;
    int a, b;
    int x1, y1, x2, y2;

    while (scanf("%d %d %d %d", &x1, &y1, &x2, &y2) == 4 &&
           (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0))
    {
        cont = 0;
        teste++;

        scanf("%d", &met);

        for (int i = 0; i < met; i++)
        {
            scanf("%d %d", &a, &b);
            {
                if (a >= x1 && a <= x2 && b <= y1 && b >= y2)
                {
                    cont++;
                }
            }
        }

        printf("Teste %d\n", teste);
        printf("%d\n", cont);
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int cont;
    int al;
    int n, max, min;

    while (scanf("%d %d %d", &n, &min, &max) != EOF)
    {
        cont = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &al);

            if (al >= min && al <= max)
            {
                cont = cont + 1;
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}
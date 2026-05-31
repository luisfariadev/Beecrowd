#include <stdio.h>

int main()
{
    int l, maior, p;

    while (scanf("%d", &l) == 1)
    {
        maior = 0;

        for (int i = 0; i < l; i++)
        {
            scanf("%d", &p);
            {
                if (p > maior)
                {
                    maior = p;
                }
            }
        }

        if (maior < 10)
        {
            printf("1\n");
        }
        else if (maior >= 20)
        {
            printf("3\n");
        }
        else
        {
            printf("2\n");
        }
    }

    return 0;
}
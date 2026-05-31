#include <stdio.h>

int main()
{
    int n, m;
    int troco;

    while (1)
    {
        scanf("%d %d", &n, &m);

        if (n == 0 && m == 0)
        {
            break;
        }

        troco = m - n;

        if (troco == 150 || troco == 120 || troco == 110 || troco == 105 || troco == 102 ||
            troco == 70 || troco == 60 || troco == 55 || troco == 52 ||
            troco == 30 || troco == 25 || troco == 22 || troco == 4 || troco == 40 ||
            troco == 15 || troco == 12 || troco == 7 || troco == 200)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }

    return 0;
}
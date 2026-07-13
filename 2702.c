#include <stdio.h>

int main()
{
    int total = 0;
    int ca, ba, pa;
    int cr, br, pr;
    scanf("%d %d %d", &ca, &ba, &pa);
    scanf("%d %d %d", &cr, &br, &pr);

    if (cr > ca)
    {
        total = total + cr - ca;
    }

    if (br > ba)
    {
        total = total + br - ba;
    }

    if (pr > pa)
    {
        total = total + pr - pa;
    }

    printf("%d\n", total);

    return 0;
}
#include <stdio.h>

int main()
{

    int x, m;

    do
    {
        scanf("%d %d", &x, &m);

        if (x != 0 && m != 0)
        {
            printf("%d\n", x * m);
        }

    } while (x != 0 && m != 0);

    return 0;
}
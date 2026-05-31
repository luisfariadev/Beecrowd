#include <stdio.h>

int main()
{
    int n[1000];
    int t, p;
    scanf("%d", &t);
    p = 0;

    for (int i = 0; i < 1000; i = i + 1)
    {

        if (p == t)
        {
            p = 0;
        }

        printf("N[%d] = %d\n", i, p);

        p = p + 1;
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int h, z, l;
    scanf("%d %d %d", &h, &z, &l);

    if ((h > l && h < z) || (h > z && h < l))
    {
        printf("huguinho\n");
    }
    else if ((z > l && z < h) || (z < l && z > h))
    {
        printf("zezinho\n");
    }
    else
    {
        printf("luisinho\n");
    }

    return 0;
}
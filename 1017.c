#include <stdio.h>

int main()
{
    int t, v;
    float d, l;
    scanf("%d %d", &t, &v);
    d = v * t;
    l = d / 12;
    printf("%.3f\n", l);

    return 0;
}
#include <stdio.h>

int main()
{

    int h, p;
    scanf("%d %d", &h, &p);
    float g;

    g = (float)h / p;
    printf("%.2f\n", g);

    return 0;
}
#include <stdio.h>

int main()
{
    int t;

    while (scanf("%d", &t) != EOF)
    {
        int g = (t + 99) / 100;
        printf("%d\n", g);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a, b;
    scanf("%d %d", &a, &b);

    if (a + b > n)
    {
        printf("Deixa para amanha!\n");
    }
    else
    {
        printf("Farei hoje!\n");
    }

    return 0;
}
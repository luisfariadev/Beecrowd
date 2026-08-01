#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        printf("resposta %d: %d\n", i, a);
    }

    return 0;
}
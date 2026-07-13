#include <stdio.h>

int main()
{
    int a, b, c, menor;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    menor = 4 * a + 2 * b;

    if (2 * a + 2 * c < menor)
    {
        menor = 2 * a + 2 * c;
    }

    if (4 * c + 2 * b < menor)
    {
        menor = 4 * c + 2 * b;
    }

    printf("%d\n", menor);

    return 0;
}
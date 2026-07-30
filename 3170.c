#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    b = b / 2;
    int total = b - a;

    if (total > 0)
    {
        printf("Faltam %d bolinha(s)\n", total);
    }
    else
    {
        printf("Amelia tem todas bolinhas!\n");
    }

    return 0;
}
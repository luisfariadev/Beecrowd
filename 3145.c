#include <stdio.h>

int main()
{
    int a, b;
    float resul;
    scanf("%d %d", &a, &b);
    a = a + 2;
    resul = b / (a * 1.0);

    printf("%.2f\n", resul);

    return 0;
}
#include <stdio.h>

int main()
{
    int p1, n1;
    float v1;
    scanf("%d %d %f", &p1, &n1, &v1);

    int p2, n2;
    float v2;
    scanf("%d %d %f", &p2, &n2, &v2);

    float t1, t2, total;
    t1 = n1 * v1;
    t2 = n2 * v2;
    total = t1 + t2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
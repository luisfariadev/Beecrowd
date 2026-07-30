#include <stdio.h>

int main()
{

    int maior;
    int mae, a, b;
    scanf("%d %d %d", &mae, &a, &b);
    mae = mae - (a + b);

    if (a > b && a > mae)
    {
        maior = a;
    }
    else if (b > a && b > mae)
    {
        maior = b;
    }
    else
    {
        maior = mae;
    }

    printf("%d\n", maior);

    return 0;
}
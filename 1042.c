#include <stdio.h>

int main()
{

    int a, b, c;
    int menor, medio, maior;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        maior = a;
    }

    else if (b > a && b > c)
    {
        maior = b;
    }
    else
    {
        maior = c;
    }

    if (a < b && a < c)
    {
        menor = a;
    }
    else if (b < a && b < c)
    {
        menor = b;
    }
    else
    {
        menor = c;
    }

    if (a > b && a < c || a > c && a < b)
    {
        medio = a;
    }
    else if (b > a && b < c || b > c && b < a)
    {
        medio = b;
    }
    else
    {
        medio = c;
    }

    printf("%d\n%d\n%d\n", menor, medio, maior);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
#include <stdio.h>
 
int main()
{

    int a, b, c;
    int menor, medio, maior;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        maior = a;
    }

    else if (b > a && b > c)
    {
        maior = b;
    }
    else
    {
        maior = c;
    }

    if (a < b && a < c)
    {
        menor = a;
    }
    else if (b < a && b < c)
    {
        menor = b;
    }
    else
    {
        menor = c;
    }

    if (a > b && a < c || a > c && a < b)
    {
        medio = a;
    }
    else if (b > a && b < c || b > c && b < a)
    {
        medio = b;
    }
    else
    {
        medio = c;
    }

    printf("%d\n%d\n%d\n", menor, medio, maior);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
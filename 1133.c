#include <stdio.h>

int main()
{

    int x, y, repeticoes, menor;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        repeticoes = x - y;
        menor = y;
    }
    else
    {
        repeticoes = y - x;
        menor = x;
    }

    repeticoes = repeticoes - 1;

    for (int cont = 0; cont < repeticoes; cont = cont + 1)
    {
        menor = menor + 1;

        if (menor % 5 == 2 || menor % 5 == 3)
        {
            printf("%d\n", menor);
        }
    }

    return 0;
}
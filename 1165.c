#include <stdio.h>

int main()
{

    int n, valor, v;
    scanf("%d", &n);
    v = 1;

    for (int cont = 0; cont < n; cont = cont + 1)
    {
        scanf("%d", &valor);

        if (valor < 2)
        {
            printf("%d nao eh primo\n", valor);
            v = 0;
        }
        else
        {

            for (int i = 2; i < valor; i = i + 1)
            {
                if (valor % i == 0 && valor != i)
                {
                    v = 0;
                    break;
                }
            }
        }

        if (v == 1)
        {
            printf("%d eh primo\n", valor);
        }
        else
        {
            printf("%d nao eh primo\n", valor);
        }

        v = 1;
    }

    return 0;
}
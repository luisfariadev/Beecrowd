#include <stdio.h>

int main()
{

    int x, positivo, par, impar, negativo;

    par = 0;
    impar = 0;
    positivo = 0;
    negativo = 0;

    for (int cont = 0; cont < 5; cont = cont + 1)
    {
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }

        if (x > 0)
        {
            positivo = positivo + 1;
        }
        else if (x < 0)
        {
            negativo = negativo + 1;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}
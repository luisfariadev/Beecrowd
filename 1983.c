#include <stdio.h>

int main()
{

    int n, mat, matrif;
    float nota, maior;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %f", &mat, &nota);

        if (i == 0)
        {
            maior = nota;
            matrif = mat;
        }

        if (nota > maior)
        {
            maior = nota;
            matrif = mat;
        }
    }

    if (maior >= 8)
    {
        printf("%d\n", matrif);
    }
    else
    {
        printf("Minimum note not reached\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    float resul;
    int som1;
    int som2;
    int nota, carga;
    int m;

    while (scanf("%d", &m) != EOF)
    {
        som1 = 0;
        som2 = 0;

        for (int i = 1; i <= m; i++)
        {
            scanf("%d %d", &nota, &carga);
            som1 = som1 + nota * carga;
            som2 = som2 + carga;
        }

        som2 = 100 * som2;
        resul = som1 * 1.0 / som2;
        printf("%.4f\n", resul);
    }

    return 0;
}
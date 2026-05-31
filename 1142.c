#include <stdio.h>

int main()
{

    int n, fila;
    scanf("%d", &n);
    fila = 0;

    for (int cont = 0; cont < n; cont = cont + 1)
    {
        for (int i = 0; i < 3; i = i + 1)
        {
            fila = fila + 1;
            printf("%d ", fila);
        }
        printf("PUM\n");
        fila = fila + 1;
    }

    return 0;
}
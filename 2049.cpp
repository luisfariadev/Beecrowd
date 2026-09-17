#include <stdio.h>
#include <string.h>
#define max 1000005
#define max2 300005

int main()
{
    char buscada[max];
    char busca[max2];
    int cont = 1;

    while (scanf("%s", buscada) && buscada != "0")
    {
        printf("Instancia: %d\n", cont);
        cont++;
        scanf("%s", busca);

        if (strstr(busca, buscada) != NULL)
        {
            printf("Verdadeira\n");
        }
        else
        {
            printf("Falsa\n");
        }

        printf("\n");
    }

    return 0;
}
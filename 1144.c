#include <stdio.h>

int main()
{

    int n, segundo, terceiro;
    scanf("%d", &n);

    for (int cont = 1; cont <= n; cont++)
    {
        segundo = cont * cont;
        terceiro = cont * segundo;

        for (int i = 1; i <= 2; i = i + 1)
        {
            printf("%d %d %d\n", cont, segundo, terceiro);
            segundo = segundo + 1;
            terceiro = terceiro + 1;
        }
    }

    return 0;
}
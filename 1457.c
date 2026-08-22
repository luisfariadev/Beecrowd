#include <stdio.h>
#include <string.h>

int main()
{
    int numero;
    char quant[25];
    int n, tam;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int p = 0;
        long long fat = 1;
        scanf("%d", &numero);
        scanf("%s", quant);
        tam = strlen(quant);

        while (1)
        {
            if (numero - (p * tam) <= 1)
            {
                break;
            }
            else
            {
                fat = fat * (numero - (p * tam));
                p++;
            }
        }

        printf("%lld\n", fat);
    }

    return 0;
}
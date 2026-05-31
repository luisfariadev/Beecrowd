#include <stdio.h>

int main()
{

    int n, num, quant;
    scanf("%d", &n);
    float soma = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &num, &quant);

        if (num == 1001)
        {
            soma = soma + quant * 1.50;
        }
        else if (num == 1002)
        {
            soma = soma + quant * 2.50;
        }
        else if (num == 1003)
        {
            soma = soma + quant * 3.50;
        }
        else if (num == 1004)
        {
            soma = soma + quant * 4.50;
        }
        else
        {
            soma = soma + quant * 5.50;
        }
    }

    printf("%.2f\n", soma);

    return 0;
}
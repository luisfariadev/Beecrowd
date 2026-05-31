#include <stdio.h>

int main()
{

    float renda, imposto;
    scanf("%f", &renda);

    if (renda <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (renda <= 3000)
    {
        imposto = 0.08 * (renda - 2000.00);
        printf("R$ %.2f\n", imposto);
    }
    else if (renda <= 4500)
    {
        imposto = 0.18 * (renda - 3000) + 80;
        printf("R$ %.2f\n", imposto);
    }
    else
    {
        imposto = 0.28 * (renda - 4500) + 350;
        printf("R$ %.2f\n", imposto);
    }

    return 0;
}
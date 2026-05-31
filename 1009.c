#include <stdio.h>

int main()
{

    double salario, vendas, montante;
    char nome[50];
    scanf("%s", nome);
    scanf("%lf %lf", &salario, &vendas);
    montante = 0.15 * vendas + salario;
    printf("TOTAL = R$ %.2lf\n", montante);

    return 0;
}
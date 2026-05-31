#include <stdio.h>

int main()
{

    int numero, horas;
    float valor, salario;
    scanf("%d %d %f", &numero, &horas, &valor);
    salario = horas * valor;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salario);

    return 0;
}
#include <stdio.h>

int main()
{
    int idade, anos, restoanos, meses, restodias;
    scanf("%d", &idade);

    anos = idade / 365;
    printf("%d ano(s)\n", anos);
    restoanos = idade % 365;

    meses = restoanos / 30;
    printf("%d mes(es)\n", meses);

    restodias = restoanos % 30;
    printf("%d dia(s)\n", restodias);

    return 0;
}
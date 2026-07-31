#include <stdio.h>

int main()
{
    int hora, minuto;

    while (scanf("%d %d", &hora, &minuto) != EOF)
    {
        hora = hora / 30;
        minuto = minuto / 6;
        printf("%02d:%02d\n", hora, minuto);
    }

    return 0;
}
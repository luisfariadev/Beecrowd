#include <stdio.h>

int main()
{
    int n, horas, minutos, segundos, restohoras, restominutos;
    scanf("%d", &n);

    horas = n / 3600;
    printf("%d:", horas);
    restohoras = n % 3600;

    minutos = restohoras / 60;
    printf("%d:", minutos);
    restominutos = n % 60;

    segundos = restominutos / 1;
    printf("%d\n", segundos);

    return 0;
}
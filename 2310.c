#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    char nome[105];
    int s1, b1, a1;
    float totalsaque, totalbloqueio, totalataque;
    float saque, bloqueio, ataque;
    totalsaque = 0;
    totalbloqueio = 0;
    totalataque = 0;
    saque = 0;
    bloqueio = 0;
    ataque = 0;

    for (int i = 0; i < n; i++)
    {
        getchar();

        fgets(nome, 101, stdin);
        scanf("%d %d %d", &s1, &b1, &a1);
        totalsaque = totalsaque + s1;
        totalbloqueio = totalbloqueio + b1;
        totalataque = totalataque + a1;

        scanf("%d %d %d", &s1, &b1, &a1);
        saque = saque + s1;
        bloqueio = bloqueio + b1;
        ataque = ataque + a1;
    }

    saque = (saque / totalsaque) * 100;
    bloqueio = (bloqueio / totalbloqueio) * 100;
    ataque = (ataque / totalataque) * 100;

    printf("Pontos de Saque: %.2f %%.\n", saque);
    printf("Pontos de Bloqueio: %.2f %%.\n", bloqueio);
    printf("Pontos de Ataque: %.2f %%.\n", ataque);

    return 0;
}
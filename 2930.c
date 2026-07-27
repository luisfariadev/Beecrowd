#include <stdio.h>

int main()
{
    int e, d;
    scanf("%d %d", &e, &d);

    if (e > d)
    {
        printf("Eu odeio a professora!\n");
        return 0;
    }

    int a = d - e;

    if (a >= 3)
    {
        printf("Muito bem! Apresenta antes do Natal!\n");
    }
    else
    {
        printf("Parece o trabalho do meu filho!\n");

        int p = e + 2;

        if (p < 24)
        {
            printf("TCC Apresentado!\n");
        }
        else
        {
            printf("Fail! Entao eh nataaaaal!\n");
        }
    }

    return 0;
}
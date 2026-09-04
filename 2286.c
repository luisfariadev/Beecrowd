#include <stdio.h>

int main()
{
    int teste = 0;
    int n;
    char nome1[30];
    char nome2[30];
    int valora;
    int valorb;

    while (scanf("%d", &n) == 1 && n != 0)
    {
        teste++;
        scanf("%s", nome1);
        scanf("%s", nome2);

        printf("Teste %d\n", teste);

        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &valora, &valorb);

            if ((valora + valorb) % 2 == 0)
            {
                printf("%s\n", nome1);
            }
            else
            {
                printf("%s\n", nome2);
            }
        }

        printf("\n");
    }

    return 0;
}
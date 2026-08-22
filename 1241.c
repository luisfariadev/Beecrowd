#include <stdio.h>
#include <string.h>

int main()
{
    int pa;
    int pb;
    int n;
    scanf("%d", &n);
    char valora[1010];
    char valorb[1010];

    for (int i = 0; i < n; i++)
    {
        int z = 0;
        int controle = 1;
        scanf("%s %s", valora, valorb);
        pa = strcspn(valora, "\0");
        pb = strcspn(valorb, "\0");
        pa = pa - pb;

        for (int i = pa; i <= pa + pb; i++)
        {
            if (valora[i] != valorb[z])
            {
                controle = 0;
                break;
            }

            z++;
        }

        if (controle == 0)
        {
            printf("nao encaixa\n");
        }
        else
        {
            printf("encaixa\n");
        }
    }

    return 0;
}
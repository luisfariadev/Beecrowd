#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int d;
    int pessoa;

    while (scanf("%d %d", &n, &d) != EOF)
    {
        int cont2 = 1;
        char dataf[15];
        char data[15];

        for (int i = 0; i < d; i++)
        {
            int controle = 1;
            scanf("%s", data);

            for (int j = 0; j < n; j++)
            {
                scanf("%d", &pessoa);

                if (pessoa == 0)
                {
                    controle = 0;
                }
            }

            if (controle == 1 && cont2 == 1)
            {
                strcpy(dataf, data);
                cont2 = 0;
            }
        }

        if (cont2 == 1)
        {
            printf("Pizza antes de FdI\n");
        }
        else
        {
            printf("%s\n", dataf);
        }
    }

    return 0;
}
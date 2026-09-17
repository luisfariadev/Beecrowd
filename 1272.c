#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char p;
    char frase[55];

    for (int i = 0; i < n; i++)
    {
        fgets(frase, 55, stdin);
        int pos = strcspn(frase, "\n");

        for (int i = 0; i < pos; i++)
        {
            if (isalpha(frase[i]))
            {
                if (i == 0 || frase[i - 1] == ' ')
                {
                    printf("%c", frase[i]);
                }
            }
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);
    char vilao[30];

    for (int i = 0; i < n; i++)
    {
        getchar();
        fgets(vilao, 30, stdin);

        if (strcmp(vilao, "Coderinga") == 0)
        {
            printf("N\n");
        }
        else
            printf("Y\n");
    }

    return 0;
}
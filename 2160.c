#include <stdio.h>
#include <string.h>

int main()
{
    char frase[505];
    fgets(frase, 501, stdin);
    int n = strcspn(frase, "\n");

    if (n <= 80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
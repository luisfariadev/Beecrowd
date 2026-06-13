#include <stdio.h>

int main()
{
    char caractere[505];
    int n;
    n = 0;
    scanf("%c", &caractere[0]);

    while (caractere[n] != '\n')
    {
        n = n + 1;
        scanf("%c", &caractere[n]);
    }

    if (n > 140)
    {
        printf("MUTE\n");
    }
    else
    {
        printf("TWEET\n");
    }

    return 0;
}
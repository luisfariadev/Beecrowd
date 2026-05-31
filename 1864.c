#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    char frase[34] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    for (int i = 0; i < n; i++)
    {
        printf("%c", frase[i]);
    }

    printf("\n");

    return 0;
}
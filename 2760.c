#include <stdio.h>
#include <string.h>

int main()
{
    char frase1[105];
    char frase2[105];
    char frase3[105];

    while (fgets(frase1, 101, stdin) != NULL &&
           fgets(frase2, 101, stdin) != NULL &&
           fgets(frase3, 101, stdin) != NULL)
    {
        frase1[strcspn(frase1, "\n")] = '\0';
        frase2[strcspn(frase2, "\n")] = '\0';
        frase3[strcspn(frase3, "\n")] = '\0';

        printf("%s%s%s\n", frase1, frase2, frase3);
        printf("%s%s%s\n", frase2, frase3, frase1);
        printf("%s%s%s\n", frase3, frase1, frase2);
        printf("%.10s%.10s%.10s\n", frase1, frase2, frase3);
    }

    return 0;
#include <stdio.h>

int main()
{
    char primeiro;
    char segundo;
    char terceiro;

    while (scanf("%c %c %c", &primeiro, &segundo, &terceiro) != EOF)
    {
        getchar();
        printf("A = %c, B = %c, C = %c\n", primeiro, segundo, terceiro);
        printf("A = %c, B = %c, C = %c\n", segundo, terceiro, primeiro);
        printf("A = %c, B = %c, C = %c\n", terceiro, primeiro, segundo);
    }

    return 0;
}

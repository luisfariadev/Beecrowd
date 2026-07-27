#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    int pos = c - 'A' + 1;
    printf("%d\n", pos);

    return 0;
}
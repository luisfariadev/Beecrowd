#include <stdio.h>

int main()
{
    char data[12];
    scanf("%s", &data);

    printf("%c%c/", data[3], data[4]);
    printf("%c%c/", data[0], data[1]);
    printf("%c%c\n", data[6], data[7]);

    printf("%c%c/", data[6], data[7]);
    printf("%c%c/", data[3], data[4]);
    printf("%c%c\n", data[0], data[1]);

    printf("%c%c-", data[0], data[1]);
    printf("%c%c-", data[3], data[4]);
    printf("%c%c\n", data[6], data[7]);

    return 0;
}
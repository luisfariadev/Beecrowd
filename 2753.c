#include <stdio.h>

int main()
{
    int letra[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                     'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int p = 97;

    for (int i = 0; i < 26; i++)
    {
        printf("%d e %c\n", p, letra[i]);
        p++;
    }

    return 0;
}
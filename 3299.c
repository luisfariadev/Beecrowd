#include <stdio.h>
#include <string.h>

int main()
{
    char p;
    char g;
    int controle = 0;

    while (scanf("%c", &p) == 1 && p != '\n')
    {
        printf("%c", p);

        if (p == '3' && g == '1')
        {
            controle = 1;
        }

        g = p;
    }

    if (controle == 1)
    {
        printf(" es de Mala Suerte\n");
    }
    else
    {
        printf(" NO es de Mala Suerte\n");
    }

    return 0;
}
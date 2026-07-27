#include <stdio.h>
#include <string.h>

void cal1(char alfabeto[], char palavra1[], char palavra2[])
{
    int p1;
    int p2;

    for (int i = 0; i < 26; i++)
    {
        if (palavra1[0] == alfabeto[i])
        {
            p1 = i;
        }

        if (palavra2[0] == alfabeto[i])
        {
            p2 = i;
        }
    }

    if (p1 <= p2)
    {
        printf("%s\n", palavra1);
        printf("%s\n", palavra2);
    }
    else
    {
        printf("%s\n", palavra2);
        printf("%s\n", palavra1);
    }
}

void cal2(char alfabeto[], char palavra1[], char palavra2[])
{
    int p = 0;
    int controle = 10;

    while (palavra1[p] == palavra2[p])
    {
        if (palavra1[p] == '\0' && palavra2[p] == '\0')
        {
            break;
        }

        p++;

        if (palavra1[p] == '\0' && palavra2[p] != '\0')
        {
            controle = 1;
            break;
        }

        if (palavra2[p] == '\0' && palavra1[p] != '\0')
        {
            controle = 0;
            break;
        }
    }

    if (controle == 1)
    {
        printf("%s\n", palavra1);
        printf("%s\n", palavra2);
    }
    else if (controle == 0)
    {
        printf("%s\n", palavra2);
        printf("%s\n", palavra1);
    }
    else
    {
        int p1;
        int p2;

        for (int i = 0; i < 26; i++)
        {
            if (palavra1[p] == alfabeto[i])
            {
                p1 = i;
            }

            if (palavra2[p] == alfabeto[i])
            {
                p2 = i;
            }
        }

        if (p1 <= p2)
        {
            printf("%s\n", palavra1);
            printf("%s\n", palavra2);
        }
        else
        {
            printf("%s\n", palavra2);
            printf("%s\n", palavra1);
        }
    }
}

int main()
{
    char alfabeto[30] = "abcdefghijklmnopqrstuvwxyz";
    char palavra1[25];
    char palavra2[25];
    scanf("%s %s", palavra1, palavra2);

    if (palavra1[0] != palavra2[0])
    {
        cal1(alfabeto, palavra1, palavra2);
    }
    else
    {
        cal2(alfabeto, palavra1, palavra2);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
    int n;
    scanf("%d", &n);

    int a;
    char b;
    int c;
    int controle;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %c %d", &a, &b, &c);

        for (int j = 0; j < 26; j++)
        {
            if (b == alfabeto[j])
            {
                controle = 0; // Minúsculo
                break;
            }

            else if (b == alfabeto[j] - 32)
            {
                controle = 1;
                break;
            }
        }

        if (a == c)
        {
            printf("%d\n", a * c);
        }
        else if (controle == 0)
        {

            printf("%d\n", c + a);
        }
        else
        {
            printf("%d\n", c - a);
        }
    }

    return 0;
}
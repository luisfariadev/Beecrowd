#include <stdio.h>

int main()
{

    int i, j;
    i = 1;
    j = 7;

    while (i <= 9 && j >= 5)
    {

        for (int cont = 0; cont < 3; cont = cont + 1)
        {
            printf("I=%d J=%d\n", i, j);
            j = j - 1;
        }

        i = i + 2;
        j = j + 3;
    }

    return 0;
}
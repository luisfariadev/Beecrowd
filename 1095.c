#include <stdio.h>

int main()
{

    int i, j;
    i = 1;
    j = 60;

    for (int cont = 0; cont <= 12; cont = cont + 1)
    {
        printf("I=%d J=%d\n", i, j);
        i = i + 3;
        j = j - 5;
    }

    return 0;
}
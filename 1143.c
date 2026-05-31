#include <stdio.h>

int main()
{

    int n, a, b, c;
    scanf("%d", &n);
    a = 1;
    b = 1;
    c = 1;

    for (int cont = 0; cont < n; cont = cont + 1)
    {
        b = a * a;
        c = a * a * a;

        printf("%d %d %d\n", a, b, c);

        a = a + 1;
    }

    return 0;
}
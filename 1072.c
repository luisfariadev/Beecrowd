#include <stdio.h>

int main()
{

    int n, x, dentro, fora;
    scanf("%d", &n);

    dentro = 0;
    fora = 0;

    for (int cont = 0; cont < n; cont = cont + 1)
    {
        scanf("%d", &x);
        if (x >= 10 && x <= 20)
        {
            dentro = dentro + 1;
        }
        else
        {
            fora = fora + 1;
        }
    }

    printf("%d in\n%d out\n", dentro, fora);

    return 0;
}
#include <stdio.h>

int main()
{

    for (int i = 0; i <= 10; i = i + 1)
    {
        float p = i * 0.2;

        for (int j = 1; j <= 3; j++)
        {

            if (p == (int)p)
            {
                printf("I=%.0f J=%.0f\n", p, p + j);
            }
            else
            {
                printf("I=%.1f J=%.1f\n", p, p + j);
            }
        }
    }

    return 0;
}
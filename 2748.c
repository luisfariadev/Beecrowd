#include <stdio.h>

int main()
{
    for (int i = 0; i < 39; i++)
    {
        printf("-");
    }

    printf("\n");

    for (int j = 0; j < 5; j++)
    {
        if (j == 0)
        {
            for (int i = 0; i < 39; i++)
            {
                if (i > 32)
                {
                    break;
                }

                if (i == 0 || i == 32)
                {
                    printf("|");
                }
                else if (i == 9)
                {
                    printf("Roberto");
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
        else if (j == 1)
        {
            for (int i = 0; i < 39; i++)
            {
                if (i == 0 || i == 38)
                {
                    printf("|");
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
        else if (j == 2)
        {
            for (int i = 0; i < 39; i++)
            {
                if (i > 35)
                {
                    break;
                }
                if (i == 0 || i == 35)
                {
                    printf("|");
                }
                else if (i == 9)
                {
                    printf("5786");
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
        else if (j == 3)
        {
            for (int i = 0; i < 39; i++)
            {
                if (i == 0 || i == 38)
                {
                    printf("|");
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
        else if (j == 4)
        {
            for (int i = 0; i < 39; i++)
            {
                if (i > 33)
                {
                    break;
                }

                if (i == 0 || i == 33)
                {
                    printf("|");
                }
                else if (i == 9)
                {
                    printf("UNIFEI");
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }

    for (int i = 0; i < 39; i++)
    {
        printf("-");
    }

    printf("\n");

    return 0;
}
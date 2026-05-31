#include <stdio.h>

int main()
{

    int primeiro, segundo, terceiro;
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);

    if (primeiro == segundo)
    {
        if (terceiro > segundo)
        {
            printf(":)\n");
        }
        else
        {
            printf(":(\n");
        }
    }

    if (segundo < primeiro)
    {
        if (terceiro >= segundo)
        {
            printf(":)\n");
        }
        else
        {
            if (segundo - terceiro >= primeiro - segundo)
            {
                printf(":(\n");
            }
            else
            {
                printf(":)\n");
            }
        }
    }

    if (segundo > primeiro)
    {
        if (terceiro <= segundo)
        {
            printf(":(\n");
        }
        else
        {
            if (terceiro - segundo < segundo - primeiro)
            {
                printf(":(\n");
            }
            else
            {
                printf(":)\n");
            }
        }
    }

    return 0;
}
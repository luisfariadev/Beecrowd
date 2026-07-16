#include <stdio.h>
#include <string.h>

int obterraio(char magia[], int n)
{
    int raio;

    if (strcmp(magia, "fire") == 0)
    {
        if (n == 1)
        {
            raio = 20;
        }
        else if (n == 2)
        {
            raio = 30;
        }
        else
        {
            raio = 50;
        }
    }
    else if (strcmp(magia, "water") == 0)
    {
        if (n == 1)
        {
            raio = 10;
        }
        else if (n == 2)
        {
            raio = 25;
        }
        else
        {
            raio = 40;
        }
    }
    else if (strcmp(magia, "earth") == 0)
    {
        if (n == 1)
        {
            raio = 25;
        }
        else if (n == 2)
        {
            raio = 55;
        }
        else
        {
            raio = 70;
        }
    }
    else
    {
        if (n == 1)
        {
            raio = 18;
        }
        else if (n == 2)
        {
            raio = 38;
        }
        else
        {
            raio = 60;
        }
    }

    return raio;
}

int superior(int cy, int y0, int h, int raio)
{
    int controle;
    int vertical = cy - (y0 + h);

    if (vertical <= raio)
    {
        controle = 1;
    }
    else
    {
        controle = 0;
    }

    return controle;
}

int inferior(int y0, int cy, int raio)
{
    int controle;
    int vertical = y0 - cy;

    if (vertical <= raio)
    {
        controle = 1;
    }
    else
    {
        controle = 0;
    }

    return controle;
}

int direita(int cx, int cy, int x0, int y0, int h, int w, int raio)
{
    int controle;
    int vertical;

    if (cy > y0 + h)
    {
        vertical = cy - (y0 + h);
    }
    else if (cy < y0)
    {
        vertical = y0 - cy;
    }
    else
    {
        vertical = 0;
    }

    int horizontal = cx - (x0 + w);
    int calculo = vertical * vertical + horizontal * horizontal;

    if (calculo <= raio * raio)
    {
        controle = 1;
    }
    else
    {
        controle = 0;
    }

    return controle;
}

int esquerda(int cx, int cy, int x0, int y0, int h, int raio)
{
    int controle;
    int vertical;

    if (cy > y0 + h)
    {
        vertical = cy - (y0 + h);
    }
    else if (cy < y0)
    {
        vertical = y0 - cy;
    }
    else
    {
        vertical = 0;
    }

    int horizontal = x0 - cx;
    int calculo = vertical * vertical + horizontal * horizontal;

    if (calculo <= raio * raio)
    {
        controle = 1;
    }
    else
    {
        controle = 0;
    }

    return controle;
}

void dano(char magia[])
{
    if (strcmp(magia, "fire") == 0)
    {
        printf("200\n");
    }
    else if (strcmp(magia, "water") == 0)
    {
        printf("300\n");
    }
    else if (strcmp(magia, "earth") == 0)
    {
        printf("400\n");
    }
    else
    {
        printf("100\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int raio;
        int controle;
        int w, h, x0, y0;
        char magia[10];
        int n, cx, cy;
        scanf("%d %d %d %d", &w, &h, &x0, &y0);
        scanf("%s", magia);
        scanf("%d %d %d", &n, &cx, &cy);
        raio = obterraio(magia, n);

        if (cx >= x0 && cx <= x0 + w && cy >= y0 + h)
        {
            controle = superior(cy, y0, h, raio);
        }
        else if (cx >= x0 && cx <= x0 + w && cy < y0)
        {
            controle = inferior(y0, cy, raio);
        }
        else if (cx > x0 + w)
        {
            controle = direita(cx, cy, x0, y0, h, w, raio);
        }
        else if (cx < x0)
        {
            controle = esquerda(cx, cy, x0, y0, h, raio);
        }
        else
        {
            controle = 1; // centro
        }

        if (controle == 1)
        {
            dano(magia);
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
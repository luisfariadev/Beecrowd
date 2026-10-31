#include <bits/stdc++.h>
using namespace std;

int main()
{
    double velo;
    cin >> velo;

    double luz = 3 * 100000000;

    double direita = (luz - velo) * 1.0 / (luz + velo);
    direita = sqrt(direita);

    double comp = 700;

    double fim = comp * direita;

    if (fim < 400)
    {
        printf("invisivel\n");
    }
    else if (fim > 400 && fim < 425)
    {
        printf("violeta\n");
    }
    else if (fim >= 425 && fim < 445)
    {
        printf("anil\n");
    }
    else if (fim >= 445 && fim < 500)
    {
        printf("azul\n");
    }
    else if (fim >= 500 && fim < 575)
    {
        printf("verde\n");
    }
    else if (fim >= 575 && fim < 585)
    {
        printf("amarelo\n");
    }
    else if (fim >= 585 && fim < 620)
    {
        printf("laranja\n");
    }
    else if (fim >= 620 && fim < 750)
    {
        printf("vermelho\n");
    }
    else if (fim >= 750)
    {
        printf("invisivel\n");
    }

    return 0;
}
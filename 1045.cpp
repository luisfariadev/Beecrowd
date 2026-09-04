#include <bits/stdc++.h>
using namespace std;

int main()
{
    float valor;
    vector<float> vet;

    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &valor);
        vet.push_back(valor);
    }

    sort(vet.rbegin(), vet.rend());

    if (vet[0] >= vet[1] + vet[2])
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    else if (vet[0] * vet[0] == vet[1] * vet[1] + vet[2] * vet[2])
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (vet[0] * vet[0] > vet[1] * vet[1] + vet[2] * vet[2])
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (vet[0] * vet[0] < vet[1] * vet[1] + vet[2] * vet[2])
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (vet[0] == vet[1] && vet[1] == vet[2])
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if ((vet[0] == vet[1] && vet[2] != vet[1]) ||
             (vet[0] == vet[2] && vet[1] != vet[0]) ||
             (vet[1] == vet[2] && vet[0] != vet[1]))
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
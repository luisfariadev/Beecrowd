
#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int pessoa;
    int consumo;
    int media;
} Casa;

bool analisa(Casa a, Casa b)
{
    return a.media < b.media;
}

int main()
{
    int n;
    int caso = 0;

    while (cin >> n && n != 0)
    {
        caso++;
        vector<Casa> casa(n);

        long long soma_consumo_total = 0;
        long long soma_pessoas_total = 0;

        for (int i = 0; i < n; i++)
        {
            int pessoa, consumo;
            cin >> pessoa >> consumo;

            int media = consumo / pessoa;

            casa[i].pessoa = pessoa;
            casa[i].consumo = consumo;
            casa[i].media = media;

            soma_consumo_total += consumo;
            soma_pessoas_total += pessoa;
        }

        sort(casa.begin(), casa.end(), analisa);

        cout << "Cidade# " << caso << ":\n";

        for (int i = 0; i < n; i++)
        {
            int qtd_pessoas_atual = casa[i].pessoa;
            int consumo_atual = casa[i].media;

            while (i + 1 < n && casa[i + 1].media == consumo_atual)
            {
                qtd_pessoas_atual += casa[i + 1].pessoa;
                i++;
            }

            cout << qtd_pessoas_atual << "-" << consumo_atual;

            if (i < n - 1)
            {
                cout << " ";
            }
        }

        cout << endl;

        double media = (double)soma_consumo_total / soma_pessoas_total;
        media = floor(media * 100) / 100;

        printf("%.2f m3\n", media);

        if (cin.peek() != EOF)
            cout << endl;
    }

    return 0;
}

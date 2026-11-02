#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    string nome;
    string condicao;

} Pessoa;

bool ordena(Pessoa a, Pessoa b)
{
    if (a.condicao != b.condicao)
    {
        return a.condicao == "YES";
    }

    return a.nome < b.nome;
}

int main()
{
    map<string, string> mapa;
    string nome;
    string cond;

    int p = 0;
    int tamanho = 0;
    string menor_Nome;

    while (cin >> nome && nome != "FIM")
    {
        cin >> cond;

        if (cond == "YES" && nome.size() > tamanho)
        {
            tamanho = nome.size();
            menor_Nome = nome;
        }

        mapa.insert({nome, cond});
    }

    Pessoa pessoa[mapa.size()];

    for (auto it = mapa.begin(); it != mapa.end(); it++)
    {
        pessoa[p].nome = it->first;
        pessoa[p].condicao = it->second;
        p++;
    }

    sort(pessoa, pessoa + p, ordena);

    for (int i = 0; i < p; i++)
    {
        cout << pessoa[i].nome << endl;
    }

    cout << endl;
    cout << "Amigo do Habay:" << endl;
    cout << menor_Nome << endl;

    return 0;
}
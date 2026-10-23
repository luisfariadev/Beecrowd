#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    string cond;
    string nome;

} Pessoa;

bool compara(Pessoa a, Pessoa b)
{
    if (a.cond == "YES")
    {
        if (b.cond == "NO")
        {
            return true;
        }
        else
        {
            if (a.nome < b.nome)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        if (b.cond == "NO")
        {
            return false;
        }
        else
        {
            if (a.nome < b.nome)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

int main()
{
    multimap<string, string> map;
    vector<Pessoa> vet;
    string nome;
    string cond;

    while (cin >> nome && nome != "FIM")
    {
        cin >> cond;
        map.insert({nome, cond});
    }

    while (!map.empty())
    {
        auto it = map.begin();

        Pessoa novapessoa;
        novapessoa.nome = it->first;
        novapessoa.cond = it->second;

        vet.push_back(novapessoa);
        map.erase(it);
    }

    sort(vet.begin(), vet.end(), compara);
    int tam = vet.size();

    for (int i = 1; i < tam; i++)
    {
        cout << vet[i].nome << endl;
    }

    cout << endl;
    cout << "Amigo do Habay:" << endl;
    cout << vet[0].nome << endl;

    return 0;
}
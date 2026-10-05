#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    string palavra;
    int tam;

} Palavra;

bool comparaMaior(Palavra a, Palavra b)
{
    if (a.tam > b.tam)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int tam;
    string frase;
    int n;
    cin >> n;
    cin.ignore();

    vector<Palavra> vet;

    for (int i = 0; i < n; i++)
    {
        getline(cin, frase);
        stringstream ss(frase);
        string palavra;

        while (ss >> palavra)
        {
            tam = palavra.size();
            vet.emplace_back(palavra, tam);
        }

        stable_sort(vet.begin(), vet.end(), comparaMaior);

        tam = vet.size();

        for (int j = 0; j < tam; j++)
        {
            cout << vet[j].palavra;

            if (j != tam - 1)
            {
                cout << " ";
            }
        }

        cout << endl;
        vet.clear();
    }

    return 0;
}
#include <bits/stdc++.h>
#define max_elem 2005
using namespace std;

void zera(int u, int visitado[])
{
    for (int i = 0; i < u; i++)
    {
        visitado[i] = 0;
    }
}

void DFS(vector<int> vet[], int visitado[], int u)
{
    if (!visitado[u])
    {
        visitado[u] = 1;

        for (auto i : vet[u])
        {
            DFS(vet, visitado, i);
        }
    }
}

int confere(int n, int visitado[])
{
    for (int i = 1; i <= n; i++)
    {
        if (!visitado[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    vector<int> direto[max_elem];
    vector<int> invertido[max_elem];
    int n;
    int m;
    int v;
    int w;
    int caso;

    while (cin >> n >> m && (n != 0 || m != 0))
    {
        for (int i = 0; i < m; i++)
        {
            cin >> v;
            cin >> w;
            cin >> caso;

            direto[v].push_back(w);
            invertido[w].push_back(v);

            if (caso == 2)
            {
                direto[w].push_back(v);
                invertido[v].push_back(w);
            }
        }

        int visita[max_elem];

        zera(n + 1, visita);
        DFS(direto, visita, 1);
        int A = confere(n, visita);

        zera(n + 1, visita);
        DFS(invertido, visita, 1);
        int B = confere(n, visita);

        if (A && B)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }

        for (int i = 0; i <= n; i++)
        {
            direto[i].clear();
            invertido[i].clear();
        }
    }

    return 0;
}
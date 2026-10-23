#include <bits/stdc++.h>
using namespace std;

void dfs(int matriz[26][26], int vertices)
{
    stack<int> pilha;
    int visitados[26];
    int totalComponentes = 0;

    for (int i = 0; i < vertices; i++)
    {
        visitados[i] = 0;
    }

    for (int i = 0; i < vertices; i++)
    {
        if (visitados[i] == 0)
        {
            totalComponentes++;
            vector<char> vet;

            pilha.push(i);

            while (pilha.size())
            {
                int u = pilha.top();
                pilha.pop();

                if (!visitados[u])
                {
                    visitados[u] = 1;
                    char caractere = u + 'a';
                    vet.push_back(caractere);
                }

                for (int j = 0; j < vertices; j++)
                {
                    if (matriz[u][j] == 1 && !visitados[j])
                    {
                        pilha.push(j);
                    }
                }
            }

            sort(vet.begin(), vet.end());
            int tam = vet.size();

            for (int k = 0; k < tam; k++)
            {
                cout << vet[k] << ",";
            }
            cout << endl;
        }
    }

    cout << totalComponentes << " connected components" << endl;
    cout << endl;
}

int main()
{
    int n;
    int v;
    int e;
    int l;
    int c;
    char caractere;
    int matriz[26][26];

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            for (int p = 0; p < 26; p++)
            {
                matriz[j][p] = 0;
            }
        }

        cin >> v;
        cin >> e;

        for (int j = 1; j <= e; j++)
        {
            cin >> caractere;
            l = caractere - 'a';
            cin >> caractere;
            c = caractere - 'a';

            matriz[l][c] = 1;
            matriz[c][l] = 1;
        }

        cout << "Case #" << i << ":" << endl;
        dfs(matriz, v);
    }

    return 0;
}
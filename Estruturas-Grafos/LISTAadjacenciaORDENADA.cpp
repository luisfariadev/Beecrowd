// Uma lista de adjacência é chamada assim, porque, para cada vértice,
// você mantém uma lista dos seus vizinhos

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    int a, b;

    cout << "Digite a quantidade de nos: ";
    cin >> n;

    vector<vector<int>> grafo(n);

    cout << "Digite a quantidade de arestas: ";
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        // Lendo dois vértices que possuem relação, ou seja, que tem aresta em comum
        cin >> a;
        cin >> b;

        // Adicionando, para criar um grafo não direcionado

        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    return 0;
}

// O Código acima funciona quando os vértices estão ordenados 0, 1, 2, 3... Quando não estão, convém usar MAP
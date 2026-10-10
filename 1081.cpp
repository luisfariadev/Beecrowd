#include <bits/stdc++.h>
#define max 25
using namespace std;

void dfs(int vertices, int matriz[max][max])
{
    const int INF = -1;
    int visitado[vertices];
    int anterior[vertices];
    stack<int> pilha;

    for (int i = 0; i < vertices; i++)
    {
        anterior[i] = -1;
        visitado[i] = 0;
    }

    pilha.push(0); // Passo o vértice de onde quero começar, no caso, o 0

    while (pilha.size())
    {
        int u = pilha.top();
        pilha.pop();

        // Visitado colocamos como 0 acima, então damos um !, vai ficar 1 e vai rodar o if
        // Se já foi visitado, vale 1, aí damos um ! e vai valer 0, não roda o if

        if (!visitado[u]) // Se não foi visitado
        {
            visitado[u] = 1;
            cout << anterior[u] << "-" << u << " " << "pathR(G," << u << ")" << endl;
        }

        int space = 1;

        for (int i = 0; i < vertices; i++)
        {
            // U representa o vértice, i representa as colunas, ou seja, as ligações com os outros
            // I representa as colunas, se o vértice I não foi visitado, entra no if
            // O vértice I, não visitado ainda, é colocado na pilha
            // O anterior a esse vértice será o vértice atual, u

            if (matriz[u][i] && !visitado[i]) // S
            {
                pilha.push(i);
                anterior[i] = u;

                for (int j = 0; j < space; j++)
                {
                    cout << " ";
                }

                cout << u << " " << "-" << " " << i << "pathR(G," << i << ")" << endl;
                space++;
            }

            // Da próxima vez, o vai pular para o último vértice colocado na pilha
            // Aí vai marcar ele como visitado
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int vertices;
    int arestas;
    int matriz[max][max];

    int v1;
    int v2;

    for (int i = 1; i <= n; i++)
    {
        cin >> vertices;
        cin >> arestas;

        cout << "Caso " << i << ":" << endl;

        // Zerando a matriz de adjacência
        for (int j = 0; j < vertices; j++)
        {
            for (int p = 0; p < vertices; p++)
            {
                matriz[j][p] = 0;
            }
        }

        for (int j = 0; j < arestas; j++)
        {
            cin >> v1;
            cin >> v2;

            matriz[v1][v2] = 1;
        }

        dfs(vertices, matriz);
    }

    return 0;
}
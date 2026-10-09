#include <bits/stdc++.h>
#define MAX 15
using namespace std;

void bfs(int l, int c, int matriz[][MAX], int linha, int coluna)
{
    int LINHAdesloca[] = {-1, 1, 0, 0};
    int COLUNAdesloca[] = {0, 0, -1, 1};

    const int INF = -1;
    int dist[MAX][MAX];
    queue<pair<int, int>> fila;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            dist[i][j] = INF;
        }
    }

    fila.push({l, c});
    dist[l][c] = 0;

    while (!fila.empty())
    {
        pair<int, int> atual = fila.front();
        fila.pop();

        int L = atual.first;
        int C = atual.second;

        if (matriz[L][C] == 0)
        {
            cout << dist[L][C] << endl;
            return; // void não retorna valor
        }

        for (int i = 0; i < 4; i++)
        {
            int novaLINHA = L + LINHAdesloca[i];
            int novaCOLUNA = C + COLUNAdesloca[i];

            if ((novaLINHA >= 0 && novaLINHA < linha) &&
                (novaCOLUNA >= 0 && novaCOLUNA < coluna) &&
                (matriz[novaLINHA][novaCOLUNA] != 2) &&
                (dist[novaLINHA][novaCOLUNA] == INF))
            {
                dist[novaLINHA][novaCOLUNA] = dist[L][C] + 1;
                fila.push({novaLINHA, novaCOLUNA});
            }
        }
    }
}

int main()
{
    int matriz[MAX][MAX];
    int linha, coluna;
    int l = -1, c = -1;

    cin >> linha >> coluna;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> matriz[i][j];

            if (matriz[i][j] == 3)
            {
                l = i; // Salva o índice da linha
                c = j; // Salva o índice da coluna
            }
        }
    }

    if (l != -1 && c != -1)
    {
        bfs(l, c, matriz, linha, coluna);
    }

    return 0;
}
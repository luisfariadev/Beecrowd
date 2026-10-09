#include <bits/stdc++.h>
using namespace std;

// Definicoes gerais
const int INF = -1; // -1 representa "infinito": ainda nao cheguei nesse vertice
const int N = 10;   // qtd de vertices (const, senao m[N][N] nao compila)
int m[N][N];        // matriz de adjacencia: m[u][v] != 0 -> existe ligacao entre u e v
int dist[N];        // dist[v] = distancia do vertice inicial ate v (comeca com INF)
queue<int> fila;    // fila da BFS: guarda os vertices que ainda vou explorar

// s = vertice de PARTIDA (de onde a busca comeca), representa a linha da matriz de adjacência
// Cada vertice e um numero de 0 a N-1, e esse numero tambem e o indice da sua linha em m
void bfs(int s)
{
    dist[s] = 0;  // do inicio ate ele mesmo a distancia e 0 (deixa de ser INF = "visitado")
    fila.push(s); // o vertice de partida e o primeiro a entrar na fila

    while (!fila.empty()) // enquanto ainda houver vertices para explorar
    {
        int u = fila.front(); // u = vertice da vez (o mais antigo da fila)
                              // na primeira volta, u == s
        fila.pop();           // tira u da fila: ja estou cuidando dele agora
        printf("%d ", u);     // imprime a ordem em que os vertices sao visitados

        // Olha a LINHA u da matriz, coluna por coluna.
        // i = candidato a vizinho de u (vale 0, 1, 2, ..., N-1)
        // Esse i e uma variavel nova, so existe dentro deste for
        for (int i = 0; i < N; i++)
        {
            // Duas condicoes juntas (&&):
            // 1) dist[i] == INF -> i ainda NAO foi descoberto
            // 2) m[u][i]        -> existe ligacao entre u e i (valor diferente de 0)
            if (dist[i] == INF && m[u][i])
            {
                dist[i] = dist[u] + 1; // i fica a 1 passo alem de u; tambem marca i como visitado
                fila.push(i);          // i entra na fila para ter seus vizinhos explorados depois
            }
        }
    }
}

int main()
{
    // Antes da BFS, todas as distancias precisam comecar em "infinito"
    // (dist e global e comecaria zerado, o que quebraria o teste dist[i] == INF)
    for (int i = 0; i < N; i++)
        dist[i] = INF;

    // Aqui voce leria/montaria a matriz m
    // Exemplo: m[0][1] = m[1][0] = 1; // liga 0 e 1 (nos dois sentidos)

    bfs(0); // comeca a busca pelo vertice 0

    return 0;
}
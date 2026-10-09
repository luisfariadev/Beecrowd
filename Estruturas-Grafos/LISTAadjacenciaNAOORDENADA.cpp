// Uma lista de adjacência é chamada assim, porque, para cada vértice,
// você mantém uma lista dos seus vizinhos

#include <bits/stdc++.h>
using namespace std;

// Para criar uma lista de adjância com vértices aleatórios (Ao invés do vector, que começa no índice 0 e vai seguindo)
// Nós podemos usar um map de vector, o map vai ordenar de acordo com as chaves e o vector de dentro receberá os vizinhos
// O MAP, no final, vai deixar em ordem crescente

int main()
{
    // Mapa, onde vértice será o primeiro int, que é também chamada de chave e que o map usa para ordenar
    // O vector<int> representa os vizinhos

    map<int, vector<int>> grafo;

    int arestas;
    cout << "Digite a quantidade de arestas: ";
    cin >> arestas;

    int vertA;
    int vertB;

    for (int i = 0; i < arestas; i++)
    {
        // Dois vértices que se relacionam

        cin >> vertA;
        cin >> vertB;

        // Adicionando, para criar um grafo não direcionado

        grafo[vertA].push_back(vertB);
        grafo[vertB].push_back(vertA);
    }

    return 0;
}
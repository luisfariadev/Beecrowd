#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();         // pois a linha acima deixa o \n no buffer
    string word;          // não precisa declarar a quantidade;
    string texto;         // não precisa declarar a quantidade;
    set<string> conjunto; // set não repete, set é um container que guarda informações que não repetem. Se repetir, ele ignora

    for (int i = 0; i < n; i++)
    {
        getline(cin, texto);       // Vai ler o texto até o \n, não inclui o \n. E eu não preciso declarar a quantidade de caracteres
        stringstream fluxo(texto); // vai separar a string em partes individuais usando os espaços como separadores

        while (fluxo >> word) // Enquanto conseguir pegar uma string de fluxo e botar em word
        {
            conjunto.insert(word); // Inserir no set. Se repetir, não é inserido;
        }

        for (auto it = conjunto.begin(); it != conjunto.end(); it++)
        {
            if (it != conjunto.begin())
            {
                cout << " ";
            }

            cout << *it;
        }

        cout << endl; // Printa \n;

        texto.clear();    // Limpando string;
        word.clear();     // Limpando string;
        conjunto.clear(); // Limpando o set;
    }

    return 0;
}
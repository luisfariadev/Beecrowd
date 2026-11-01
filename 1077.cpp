#include <bits/stdc++.h>
using namespace std;

void analisa(string frase)
{
    int tam = frase.size();

    map<char, int> mapa;
    mapa.insert({'(', -1});
    mapa.insert({'+', 0});
    mapa.insert({'-', 0});
    mapa.insert({'*', 1});
    mapa.insert({'/', 1});
    mapa.insert({'^', 2});

    stack<char> pilha;

    for (int i = 0; i < tam; i++)
    {
        if (frase[i] == '(')
        {
            pilha.push(frase[i]);
        }
        else if (frase[i] == ')')
        {
            if (pilha.size() == 0)
            {
                continue;
            }

            while (1)
            {
                if (pilha.top() == '(')
                {
                    pilha.pop();
                    break;
                }

                cout << pilha.top();
                pilha.pop();
            }
        }
        else if (frase[i] == '+' || frase[i] == '-' || frase[i] == '*' || frase[i] == '/' || frase[i] == '^')
        {
            if (frase[i] == '^')
            {
                pilha.push(frase[i]);
                continue;
            }
            else if (pilha.size() > 0)
            {
                while (pilha.size() > 0 && mapa[pilha.top()] >= mapa[frase[i]])
                {
                    cout << pilha.top();
                    pilha.pop();
                }
            }

            pilha.push(frase[i]);
        }
        else
        {
            cout << frase[i];

            if (pilha.size() > 0)
            {
                if (pilha.top() == '^')
                {
                    cout << "^";
                    pilha.pop();
                }
            }
        }
    }

    while (!pilha.empty())
    {
        cout << pilha.top();
        pilha.pop();
    }

    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string frase;

    for (int i = 0; i < n; i++)
    {
        getline(cin, frase);
        analisa(frase);
    }

    return 0;
}
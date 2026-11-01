#include <bits/stdc++.h>
using namespace std;

int teste(string frase)
{
    int letra = 0;
    int caractere = 0;

    int tam = frase.size();

    for (int i = 0; i < tam; i++)
    {
        if (frase[i] == '+' || frase[i] == '-' || frase[i] == '*' || frase[i] == '/' || frase[i] == '.' || frase[i] == '|' || frase[i] == '^' || frase[i] == '(' || frase[i] == ')' || frase[i] == '<' || frase[i] == '>' || frase[i] == '#' || frase[i] == '=')
        {
        }
        else if (isalpha(frase[i]) || isdigit(frase[i]))
        {
        }
        else
        {
            cout << "Lexical Error!" << endl;
            return 1;
        }
    }

    return 0;
}

void analisa(string frase)
{
    int letra = 0;
    int caractere = 0;
    int nivel = 0;

    int tam = frase.size();

    if (frase[0] == '+' || frase[0] == '-' || frase[0] == '*' || frase[0] == '/' || frase[0] == '.' || frase[0] == '|' || frase[0] == '^' || frase[0] == ')' ||
        frase[0] == '>' || frase[0] == '<' || frase[0] == '=' || frase[0] == '#' ||
        frase[tam - 1] == '+' || frase[tam - 1] == '-' || frase[tam - 1] == '*' || frase[tam - 1] == '/' || frase[tam - 1] == '.' || frase[tam - 1] == '|' ||
        frase[tam - 1] == '^' || frase[tam - 1] == '(' || frase[tam - 1] == '>' || frase[tam - 1] == '<' || frase[tam - 1] == '=' || frase[tam - 1] == '#')
    {
        cout << "Syntax Error!\n";
        return;
    }
    for (int i = 0; i < tam; i++)
    {
        if (isalpha(frase[i]) || isdigit(frase[i]))
        {
            letra = letra + 1;
            caractere = 0;

            if (letra > 1)
            {
                cout << "Syntax Error!\n";
                return;
            }
        }
        else
        {
            if (frase[i] != ')' && frase[i] != '(')
            {
                caractere = caractere + 1;
                letra = 0;
            }

            if (caractere > 1)
            {
                cout << "Syntax Error!\n";
                return;
            }

            if (frase[i] == '(')
            {
                nivel++;
            }
            else if (frase[i] == ')')
            {
                nivel--;

                if (nivel < 0 || frase[i - 1] == '(')
                {
                    cout << "Syntax Error!\n";
                    return;
                }
            }
        }
    }

    vector<char> vetor;
    vector<char> vet;

    int pos = 0;

    map<char, int> mapa;
    mapa.insert({'(', 0});
    mapa.insert({'|', 1});
    mapa.insert({'.', 2});
    mapa.insert({'=', 3});
    mapa.insert({'>', 3});
    mapa.insert({'<', 3});
    mapa.insert({'#', 3});
    mapa.insert({'+', 4});
    mapa.insert({'-', 4});
    mapa.insert({'/', 5});
    mapa.insert({'*', 5});
    mapa.insert({'^', 6});

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

                vetor.push_back(pilha.top());
                pilha.pop();
            }
        }
        else if (frase[i] == '+' || frase[i] == '-' || frase[i] == '*' || frase[i] == '/' || frase[i] == '.' || frase[i] == '|' || frase[i] == '^' || frase[i] == ')' ||
                 frase[i] == '>' || frase[i] == '<' || frase[i] == '=' || frase[i] == '#')
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
                    vetor.push_back(pilha.top());
                    pilha.pop();
                }
            }

            pilha.push(frase[i]);
        }
        else
        {
            vetor.push_back(frase[i]);

            if (pilha.size() > 0)
            {
                if (pilha.top() == '^')
                {
                    vetor.push_back(pilha.top());
                    pilha.pop();
                }
            }
        }
    }

    while (pilha.size())
    {
        if (pilha.top() == '(')
        {
            cout << "Syntax Error!\n";
            return;
        }
        else
        {
            vet.push_back(pilha.top());
            pilha.pop();
        }
    }

    for (int i = 0; i < vet.size(); i++)
    {
        vetor.push_back(vet[i]);
    }

    for (int i = 0; i < vetor.size(); i++)
    {
        cout << vetor[i];
    }

    cout << endl;
}

int main()
{
    string frase;

    while (getline(cin, frase))
    {
        if (teste(frase))
        {
            continue;
        }

        analisa(frase);
    }
    return 0;
}
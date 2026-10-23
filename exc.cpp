#include <bits/stdc++.h>
using namespace std;

typedef struct 
{
    string nome;
    int ponto;
    int cond;

} Candidato;

bool compara(Candidato a, Candidato b)
{
    if(a.ponto > b.ponto)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main ()
{
    int t;
    int quantCandidatos;
    string nome;
    string linhaPontos;

    cin >> t;

    vector<Candidato> candidato;
    vector<int> aux;

    for(int i = 0; i < t; i++)
    {
        cin >> quantCandidatos;

        for(int i = 0; i < quantCandidatos; i++)
        {
            getline(cin, nome);
            candidato.push_back({nome, 0, 1});
            aux.push_back(0);
        }

        while(getline(cin, linhaPontos))
        {
            if(linhaPontos.empty())
            {
                break;
            }

            int maior = 0;
            int posMaior = 0;
            int menor = quantCandidatos;
            int posMenor = 0;

            stringstream entrada(linhaPontos);
            int pontuacao = quantCandidatos;
            char c;
            float total = 0;
            int cont = 0;

            while(entrada >> c)
            {
                int valor = c - '0';
                valor--;
                total = total + pontuacao;

                if(candidato[valor].cond)
                {
                    candidato[valor].ponto = pontuacao;
                    aux[valor] = pontuacao;

                    if(valor < (int)aux.size())
                    {
                        aux[valor] = pontuacao;
                    }

                    if(valor > maior)
                    {
                        maior = total;
                        posMaior = cont;
                    }

                    if(menor < valor)
                    {
                        menor = valor;
                        posMenor = valor;
                    }

                    cont++;
                    pontuacao--;
                }
            }

            sort(candidato.begin(), candidato.end(), compara);

            if(maior >= (total / 2) + 1)
            {
                cout << candidato[posMaior].nome << endl;
            }
            else if(cont > 1 && aux[1] == aux[cont])
            {
                for(int i = 1; i < cont; i++)
                {
                    if(candidato[i].cond && candidato[i].ponto)
                    {
                        cout << candidato[i].nome << endl;
                    }
                }
            }
            else
            {
                candidato[posMenor].cond = 0;
            }
        }

        nome.clear();
    }

    return 0;
}
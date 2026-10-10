#include <bits/stdc++.h>
#define max 2005
using namespace std;

int main()
{
    map<int, pair<int, int>> mapa;
    int n;
    int m;
    int v;
    int w;
    int p;

    while (cin >> n && cin >> m && (n != 0 && m != 0))
    {
        int cont = 0;

        for (int i = 0; i < m; i++)
        {
            cin >> v;
            cin >> w;
            cin >> p;

            if (p == 1)
            {
                mapa.insert({v, {w, 1}});
                cont++;
            }
            else
            {
                mapa.insert({v, {w, 2}});
            }
        }

        int tam = mapa.size();

        for (int i = 0; i < tam; i++)
        {
            int controle = 1;

            if (mapa[i].second == 1)
            {
                int posicao = mapa[i].second;
                int valor = mapa[i].first;
                int contador = 0;

                while (1)
                {
                    auto it = mapa.find(posicao);

                    if (it == mapa.end())
                    {
                        controle = 0;
                        break;
                    }

                    if (it->second.second == 2)
                    {
                        if (it->second.first == valor)
                        {
                            controle = 1;
                        }
                        else
                        {
                            controle = 0;
                        }

                        break;
                    }
                    else
                    {
                        if (it->second.first == valor)
                        {
                            controle = 1;
                            break;
                        }
                        else if (contador == cont && it->second.second == 1)
                        {
                            controle = 0;
                            break;
                        }
                        else
                        {
                            posicao = it->second.second;
                            contador++;
                        }
                    }
                }

                if (controle == 0)
                {
                    break;
                }
            }

            if (controle == 0)
            {
                cout << "0" << endl;
            }
            else
            {
                cout << "1" << endl;
            }

            mapa.clear();
        }
    }

    return 0;
}
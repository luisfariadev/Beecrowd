#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a;
    int b;
    map<string, string> mapa;
    string palavra;
    string traducao;
    string compara;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;

        for (int j = 0; j < a; j++)
        {
            cin >> palavra;
            cin.ignore();
            getline(cin, traducao);
            mapa.insert(make_pair(palavra, traducao));
        }

        for (int j = 0; j < b; j++)
        {
            getline(cin, traducao);
            stringstream frase(traducao);
            int cont = 0;

            while (frase >> compara)
            {
                if (cont != 0)
                {
                    cout << " ";
                }

                auto it = mapa.find(compara);

                if (it == mapa.end())
                {
                    cout << compara;
                }
                else
                {
                    cout << it->second;
                }

                cont++;
            }

            cout << endl;
        }

        cout << endl;
        mapa.clear();
    }

    return 0;
}
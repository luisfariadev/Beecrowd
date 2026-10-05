#include <bits/stdc++.h>
using namespace std;

int main()
{
    string frase;
    int tam;
    map<int, string> mapa;

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, frase);
        tam = frase.size();

        mapa.insert({tam, frase});
    }

    for (auto it = mapa.rbegin(); it != mapa.rend(); ++it)
    {
        printf("%s\n", it->second.c_str());
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> conjunto;
    string frase;

    while (getline(cin, frase))
    {
        conjunto.insert(frase);
    }

    cout << conjunto.size() << endl;
}
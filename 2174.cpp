#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> conjunto;
    int n;
    cin >> n;
    string pomekon;

    for (int i = 0; i < n; i++)
    {
        cin >> pomekon;
        conjunto.insert(pomekon);
    }

    int quant = 151 - conjunto.size();

    cout << "Falta(m) " << quant << " pomekon(s)." << endl;

    return 0;
}
#include <bits/stdc++.h>
#define PI 3.1415
using namespace std;

int main()
{
    int raio;
    int volume;

    cin >> raio >> volume;

    int v = (4 * PI * raio * raio * raio) / 3;
    v = volume / v;

    cout << v << endl;

    return 0;
}
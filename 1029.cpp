#include <bits/stdc++.h>
using namespace std;

int quant = 0;

int fib(int n)
{
    quant++;

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        quant = 0;
        int resultado = fib(x);

        cout << "fib(" << x << ") = " << quant - 1 << " calls = " << resultado << "\n";
    }

    return 0;
}
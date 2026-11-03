#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int l;

    int b;
    int B;
    int H;

    int c;
    cin >> c;
    double quant_Pessoa;

    while (c--)
    {
        cin >> n >> l;
        cin >> b >> B >> H;

        quant_Pessoa = l * 1.0 / n;

        double inicio = 0.0;
        double fim = H;

        for (int i = 0; i < 50; i++)
        {
            double meio = (inicio + fim) / 2;
            double r = b + (B - b) * meio / H;
            double v = M_PI * meio / 3.0 * (b * b + b * r + r * r);

            if (v < quant_Pessoa)
            {
                inicio = meio;
            }
            else
            {
                fim = meio;
            }
        }

        printf("%.2f\n", (inicio + fim) / 2.0);
    }

    return 0;
}
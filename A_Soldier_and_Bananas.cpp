#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k, n, w;
    int dollars = 0;
    cin >> k >> n >> w;
    // k -> cost of the first banana
    // n -> initial number of dollars the soldier has
    // w -> number of banans he wants
    for (int i = 1; i <= w; i++)
    {

        dollars = dollars + (i * k);
    }
    if (dollars <= n)
    {
        cout << 0;
    }
    else
        cout << dollars - n;

    return 0;
}
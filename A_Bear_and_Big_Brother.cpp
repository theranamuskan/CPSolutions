#include <bits/stdc++.h>
using namespace std;
int sum;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        sum++;
    }
    cout << sum;
    return 0;
}
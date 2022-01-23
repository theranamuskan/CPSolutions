#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, y;
    cin >> x;
    y = x / 5;
    if (x % 5 == 0)
    {
        cout << y;
    }
    else
    {
        cout << y+1;
    }
    return 0;
}
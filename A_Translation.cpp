#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    cin >> t >> s;
    reverse(s.begin(), s.end());
    if (s == t)
    {
        cout << " YES ";
    }
    else
        cout << " NO ";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    int i;
    for (i = 0; i < a.size(); i++)
    {
        if (a[i] < b[i])
        {
            tolower(b[i]);
        }
        if (a[i] > b[i])
        {
            towlower(a[i]);
        }
    }
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
        {
            count = 1;
            break;
        }
        else if (a[i] < b[i])
        {
            count = -1;
            break;
        }
        }
    cout << count;
    return 0;
}
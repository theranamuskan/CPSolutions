#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, count = 0;
    cin>>n;
    string s; 
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[1] == '+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << count;

    return 0;
}
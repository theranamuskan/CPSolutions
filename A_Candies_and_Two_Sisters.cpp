#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1 || arr[i] == 2)
        {
            cout << "0" << endl;
        }
        else
            cout << (arr[i]-1) / 2 << endl;
    }

    return 0;
}
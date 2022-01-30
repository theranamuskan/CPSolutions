// Input
// The first line of the input contains
// an integer n (1 ≤ n ≤ 100000) —
// the number of magnets. Then n lines follow.
// The i-th line (1 ≤ i ≤ n) contains
// either characters "01", if Mike put
// the i-th magnet in the "plus-minus" position,
// or characters "10", if Mike put the magnet in the "minus-plus" position.

#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i, count = 0;
    cin >> n;
    int arr[100000];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
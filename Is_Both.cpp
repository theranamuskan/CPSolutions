#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // your code goes here
    int num;
    cin >> num;
    if (num % 5 == 0 && num % 11 == 0)
    {
        cout << "BOTH";
    }
    else if (num % 5 == 0 || num % 11 == 0)
    {
        cout << "ONE";
    }
    else if (num % 5 != 0 || num % 11 != 0)
    {
        /* code */
        cout << "NONE";
    }

    return 0;
}

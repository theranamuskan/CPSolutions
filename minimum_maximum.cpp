#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec(5);
    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cin >> vec.at(i);
    }
    int MaxNo = INT16_MIN;
    int MinNo = INT16_MAX;
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        /* code */
        MaxNo = max(MaxNo, *it);
        MinNo = min(MinNo, *it);
    }
    cout << "The value of Min and Max is as follows." << endl;
    cout << MinNo << endl;
    cout << MaxNo << endl;

    return 0;
}
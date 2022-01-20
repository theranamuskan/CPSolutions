#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec= {34,22,55,66,7,2};
    // vec.push_back(34);
    // vec.push_back(79);
    // vec.push_back(21);
    // vec.push_back(3);
    for (auto i : vec)
    {
        cout << i << " ";
    }
// for(auto it=vec.begin();it!=vec.end();it++)
// {
//     cout<<*it<<" " ;
// }
// for (int i = 0; i < vec.size(); i++)
// {
//     /* code */
//     cout<<vec[i]<<" ";   it does not check the bound
    
//     or
//         cout<<vec.at(i)<<" ";   this is better because it checks the bound 
// }

    return 0;
}

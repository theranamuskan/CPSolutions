#include <iostream>
using namespace std;
int main()
{
    int n, num;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        num = arr[i] % 10;
    }
    if (num % 10 == 0)
    {
        /* code */
        cout << "Yes";
    }
    else
        cout << "No";

    cout << " " << endl;

    return 0;
}
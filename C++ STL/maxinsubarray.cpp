#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    for (int i = 0; i < n - k + 1; i++)
    {
        int max1 = arr[i];
        for (int j = i + 1; j < i + k; j++)
        {
            max1= max(arr[j], max1);
        }
        cout << max1 << " "; 
    }

    return 0;
}
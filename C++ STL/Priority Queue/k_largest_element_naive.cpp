#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int k;
   cin >> k;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   sort(arr.rbegin(), arr.rend()); //T.C = O(log n)
   for (int i = 0; i < k; i++)
   {
      cout << arr[i] << " ";
   }
   return 0;
}
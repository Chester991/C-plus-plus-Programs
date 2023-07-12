#include <bits/stdc++.h>
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
   bool exists = false;
   for (int i = 0; i < n; i++)
   {
      int sum = 0;
      for (int j = i; j < n; j++)
      {
         sum += arr[j];
         if (sum == 0)
         {
            exists = true;
            break;
         }
      }
      if (exists)
      {
         cout << "Subarray exists!" << endl;
         break;
      }
   }
   if (!exists)
   {
      cout << "Subarray does not exist!" << endl;
   }
}
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
   for (int i = 0; i < n; i++)
   {
      int span = 1;
      for (int j = i - 1; j >= 0; j--)
      {
         if (arr[j] < arr[i])
         {
            span++;
         }
         else if (arr[j] > arr[i])
         {
            break;
         }
      }
      cout << span << " ";
   }
   return 0;
}
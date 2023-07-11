//T.C = O(n^2)
//S.C = O(n)
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
   int sum;
   cin >> sum;
   for (int i = 0; i < n; i++)
   {
      bool found = false;
      for (int j = 0; j < n; j++)
      {
         if (i == j)
         {
            continue;
         }
         else if (arr[i] + arr[j] == sum)
         {
            found = true;
            break;
         }
      }
      if (found == true)
      {
         cout << "Yess" << endl;
         break;
      }
   }
   return 0;
}
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
   vector<int> next(n);
   stack<int> s;
   next[n - 1] = -1;
   s.push(arr[n - 1]);
   for (int i = n - 2; i >= 0; i--)
   {
      while (!s.empty() && s.top() <= arr[i])
      {
         s.pop();
      }
      int ng;
      if (s.empty())
      {
         ng = -1;
      }
      else
      {
         ng = s.top();
      }
      next[i] = ng;
      s.push(arr[i]);
   }
   for (int i = 0; i < n; i++)
   {
      cout << next[i] << " ";
   }

   return 0;
}

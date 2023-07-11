#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   int m;
   cin >> m;
   vector<int> b(m);
   for (int i = 0; i < m; i++)
   {
      cin >> b[i];
   }
   unordered_set<int> s;
   for (int i = 0; i < m; i++)
   {
      s.insert(b[i]);
   }
   for (int i = 0; i < n; i++)
   {
      if (s.find(a[i]) != s.end())
      {
         cout << a[i] << " ";
      }
   }
   return 0;
}
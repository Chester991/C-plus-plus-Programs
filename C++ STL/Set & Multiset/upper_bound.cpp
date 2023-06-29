#include <bits/stdc++.h>
using namespace std;

int main()
{
   int y;
   cin >> y;
   set<int> s;
   for (int i = 0; i < y; i++)
   {
      int a;
      cin >> a;
      s.insert(a);
   }
   for (auto it = s.begin(); it != s.end(); it++)
   {
      cout << (*it) << " ";
   }
   cout << endl;
   int n;
   cin >> n;
   auto it = s.upper_bound(n);
   if (it != s.end())
   {
      cout << (*it) << endl;
   }
   else
   {
      cout << "Given element is largest of all" << endl;
   }
   return 0;
}
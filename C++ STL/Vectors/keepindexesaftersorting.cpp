#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
      cin >> v[i];
   }
   vector<pair<int, int>> pa;
   for (int i = 0; i < n; i++)
   {
      pa.push_back({v[i], i});
   }
   sort(pa.begin(), pa.end());//this sorts the pair by its first value ie v[i]
   for (int i = 0; i < n; i++)
   {
      cout << pa[i].first << " " << pa[i].second << endl;
   }
   return 0;
}
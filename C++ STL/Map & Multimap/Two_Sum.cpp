#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   int target;
   cin >> target;
   unordered_map<int, int> mp;
   for (int i = 0; i < n; i++)
   {
      mp[arr[i]] = i;
   }
   int ans1 = -1, ans2 = -1;
   for (int i = 0; i < n; i++)
   {
      auto it = mp.find(target - arr[i]);
      if (it != mp.end())
      {
         if (i != it->second)
         {
            ans1 = arr[i];
            ans2 = it->first;
         }
      }
   }
   cout << ans1 << " " << ans2 << endl;

   return 0;
}